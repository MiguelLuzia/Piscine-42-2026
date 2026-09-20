/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 09:26:10 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/20 10:45:30 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*read_line(int fd, int *status)
{
	char	*line;
	char	*temp;
	char	c;
	int		cap;
	int		len;
	int		n;
	int		i;

	*status = 1;
	cap = 128;
	len = 0;
	line = (char *)malloc(sizeof(char) *cap);
	if (!line)
	{
		*status = -1;
		return (NULL);
	}
	while ((n = read(fd, &c, 1)) == 1 && c != '\n')
	{
		if (len + 1 >= cap)
		{
			cap *= 2;
			temp = (char *)malloc(sizeof(char) * cap);
			if (!temp)
			{
				free(line);
				*status = -1;
				return (NULL);
			}
			i = 0;
			while (i < len)
			{
				temp[i] = line[i];
				i++;
			}
			free(line);
			line = temp;
		}
		line[len++] = c;
	}
	if (n < 0)
	{
		free(line);
		*status = -1;
		return (NULL);
	}
	if (n == 0 && len == 0)
	{
		free(line);
		*status = 0;
		return (NULL);
	}
	line[len] = '\0';
	return (line);
}
