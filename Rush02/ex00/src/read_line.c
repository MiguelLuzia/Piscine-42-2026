/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurigne <sdurigne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 09:26:10 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/20 19:21:19 by sdurigne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*read_line(int fd, int *status)
{
	char	*line;
	char	*temp;
	char	c;
	int		cap_len[4];

	*status = 1;
	cap_len[0] = 128;
	cap_len[1] = 0;
	line = (char *)malloc(sizeof(char) * cap_len[0]);
	if (!line)
	{
		*status = -1;
		return (NULL);
	}
	while ((cap_len[2] = read(fd, &c, 1)) == 1 && c != '\n')
	{
		if (cap_len[1] + 1 >= cap_len[0])
		{
			cap_len[0] *= 2;
			temp = (char *)malloc(sizeof(char) * cap_len[0]);
			if (!temp)
			{
				free(line);
				*status = -1;
				return (NULL);
			}
			cap_len[3] = 0;
			while (cap_len[3] < cap_len[1])
			{
				temp[cap_len[3]] = line[cap_len[3]];
				cap_len[3]++;
			}
			free(line);
			line = temp;
		}
		line[cap_len[1]++] = c;
	}
	if (cap_len[2] < 0)
	{
		free(line);
		*status = -1;
		return (NULL);
	}
	if (cap_len[2] == 0 && cap_len[1] == 0)
	{
		free(line);
		*status = 0;
		return (NULL);
	}
	line[cap_len[1]] = '\0';
	return (line);
}

// cap, len, n, i;