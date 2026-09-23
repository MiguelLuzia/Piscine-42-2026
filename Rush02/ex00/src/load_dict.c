/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurigne <sdurigne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 15:01:46 by mdinis-d          #+#    #+#             */
/*   Updated: 2026/09/20 17:55:50 by sdurigne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_entry	*load_dict(char *file_name, int *status)
{
	int		fd_line_read[3];
	char	*line;
	t_entry	*entry;
	t_entry	*tail;
	t_entry	*dict;

	*status = 0;
	fd_line_read[0] = open(file_name, O_RDONLY);
	if (fd_line_read[0] == -1)
		return (NULL);
	dict = NULL;
	tail = NULL;
	while (1)
	{
		line = read_line(fd_line_read[0], &fd_line_read[2]);
		if (!line)
		{
			if (fd_line_read[2] == -1)
			{
				close(fd_line_read[0]);
				free_dict(dict);
				return (NULL);
			}
			break ;
		}
		entry = parse_line(line, &fd_line_read[1]);
		free(line);
		if (fd_line_read[1] == -1)
		{
			close(fd_line_read[0]);
			free_dict(dict);
			return (NULL);
		}
		if (!entry)
			continue ;
		if (key_exists(dict, entry->key))
		{
			free(entry->key);
			free(entry->value);
			free(entry);
			close(fd_line_read[0]);
			free_dict(dict);
			return (NULL);
		}
		if (!dict)
			dict = entry;
		else
			tail->next = entry;
		tail = entry;
	}
	close(fd_line_read[0]);
	if (!dict)
		return (NULL);
	*status = 1;
	return (dict);
}

// fd, line_status, read_status
