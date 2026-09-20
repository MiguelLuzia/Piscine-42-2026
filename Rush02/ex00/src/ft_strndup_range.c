/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup_range.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 09:58:52 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/20 10:02:09 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_strndup_range(char *src, int start, int end)
{
	char	*output;
	int		i;

	if (end < start)
		return (NULL);
	output = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!output)
		return (NULL);
	i = 0;
	while (start < end)
		output[i++] = src[start++];
	output[i] = '\0';
	return (output);
}
