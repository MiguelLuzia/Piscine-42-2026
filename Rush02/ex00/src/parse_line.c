/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 10:05:10 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/20 11:45:24 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_entry	*parse_line(char *line, int *status)
{
	int		i;
	int		colon;
	int		end_key;
	int		value_start;
	int		value_end;
	char	*raw_key;
	char	*key;
	char	*value;
	t_entry	*entry;

	*status = 0;
	if (is_blank(line))
		return (NULL);
	colon = -1;
	i = 0;
	while (line[i])
	{
		if (line[i] == ':')
		{
			colon = i;
			break;
		}
		i++;
	}
	if (colon <= 0)
	{
		*status = -1;
		return (NULL);
	}
	end_key = colon;
	while (end_key > 0 && (line[end_key - 1] == ' ' || line[end_key - 1] == '\t'))
		end_key--;
	if (end_key == 0)
	{
		*status = -1;
		return (NULL);
	}
	i = 0;
	while (i < end_key)
	{
		if (line[i] < '0' || line[i] > '9')
		{
			*status = -1;
			return (NULL);
		}
		i++;
	}
	raw_key = ft_strndup_range(line, 0, end_key);
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
	value_start = colon + 1;
	while (line[value_start] == ' ' || line[value_start] == '\t')
		value_start++;
	value_end = ft_len(line);
	while (value_end > value_start
		&& (line[value_end - 1] == ' '
			|| line[value_end - 1] == '\t'
			|| line[value_end - 1] == '\r'))
		value_end--;
	if (value_end == value_start)
	{
		free(key);
		*status = -1;
		return (NULL);
	}
	value = ft_strndup_range(line, value_start, value_end);
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
