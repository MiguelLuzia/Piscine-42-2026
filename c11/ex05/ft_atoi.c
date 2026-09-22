/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 09:58:22 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/22 20:59:32 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	check(char *str)
{
	int	j;

	j = 0;
	while (str[j] == ' ' || (9 <= str[j] && 13 >= str[j]))
		j++;
	if (str[j] == '-' || str[j] == '+')
		j++;
	if (str[j] <= '9' && str[j] >= '0')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	value;
	int	signal;

	i = 0;
	value = 0;
	signal = 1;
	if (check(str) == 0)
		return (0);
	while (str[i] == ' ' || (9 <= str[i] && 13 >= str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signal *= -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		value *= 10;
		value += (str[i] - 48);
		i++;
	}
	return (signal * value);
}
