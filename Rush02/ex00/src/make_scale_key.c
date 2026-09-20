/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_scale_key.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 11:13:08 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/20 11:16:49 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	make_scale_key(char *dst, int size, int power)
{
	int	i;
	int	len;

	len = 1 + (3 * power);
	if (power < 0 || len + 1 > size)
		return (0);
	dst[0] = '1';
	i = 1;
	while (i < len)
		dst[i++] = '0';
	dst[len] = '\0';
	return (1);
}
