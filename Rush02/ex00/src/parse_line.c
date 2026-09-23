/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurigne <sdurigne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 10:05:10 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/20 17:56:23 by sdurigne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_entry	*parse_line(char *line, int *status)
{
	int		cln_start_end[5];
	char	*raw_key;
	char	*key;
	char	*value;
	t_entry	*entry;

	*status = 0;
	if (is_blank(line))
		return (NULL);
	cln_start_end[1] = -1;
	cln_start_end[0] = 0;
	while (line[cln_start_end[0]])
	{
		if (line[cln_start_end[0]] == ':')
		{
			cln_start_end[1] = cln_start_end[0];
			break ;
		}
		cln_start_end[0]++;
	}
	if (cln_start_end[1] <= 0)
	{
		*status = -1;
		return (NULL);
	}
	cln_start_end[2] = cln_start_end[1];
	while (cln_start_end[2] > 0
		&& (line[cln_start_end[2] - 1] == ' '
			|| line[cln_start_end[2] - 1] == '\t'))
		cln_start_end[2]--;
	if (cln_start_end[2] == 0)
	{
		*status = -1;
		return (NULL);
	}
	cln_start_end[0] = 0;
	while (cln_start_end[0] < cln_start_end[2])
	{
		if (line[cln_start_end[0]] < '0'
			|| line[cln_start_end[0]] > '9')
		{
			*status = -1;
			return (NULL);
		}
		cln_start_end[0]++;
	}
	raw_key = ft_strndup_range(line, 0, cln_start_end[2]);
	if (!raw_key)
	{
		*status = -1;
		return (NULL);
	}
	key = normalize_input(raw_key);
	free(raw_key);
	if (!key)
	{
		*status = -1;
		return (NULL);
	}
	cln_start_end[3] = cln_start_end[1] + 1;
	while (line[cln_start_end[3]] == ' '
		|| line[cln_start_end[3]] == '\t')
		cln_start_end[3]++;
	cln_start_end[4] = ft_len(line);
	while (cln_start_end[4] > cln_start_end[3]
		&& (line[cln_start_end[4] - 1] == ' '
			|| line[cln_start_end[4] - 1] == '\t'
			|| line[cln_start_end[4] - 1] == '\r'))
		cln_start_end[4]--;
	if (cln_start_end[4] == cln_start_end[3])
	{
		free(key);
		*status = -1;
		return (NULL);
	}
	value = ft_strndup_range(line, cln_start_end[3], cln_start_end[4]);
	if (!value)
	{
		free(key);
		*status = -1;
		return (NULL);
	}
	entry = (t_entry *)malloc(sizeof(t_entry));
	if (!entry)
	{
		free(key);
		free(value);
		*status = -1;
		return (NULL);
	}
	entry->key = key;
	entry->value = value;
	entry->next = NULL;
	*status = 1;
	return (entry);
}

// i, colon, end_key, value_start, value_end