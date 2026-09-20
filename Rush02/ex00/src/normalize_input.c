/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize_input.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 09:12:14 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/20 09:24:11 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*normalize_input(char *str)
{
	int		i;
	int		start;
	int		len;
	char	*output;

	if (!str || str[0] == '\0')
		return (NULL);
	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (NULL);
		i++;
	}
	start = 0;
	while (str[start] == '0' && str[start + 1] != '0')
		start++;
	len = ft_len(str + start);
	output = (char *)malloc(sizeof(char) * (len + 1));
	if (!output)
		return (NULL);
	i = 0;
	while (i < len)
	{
		output[i] = str[start + i];
		i++;
	}
	output[len] = '\0';
	return (output);
}
