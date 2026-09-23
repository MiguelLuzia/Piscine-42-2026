/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   processing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 09:06:32 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/23 09:09:56 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	operation(int a, int b, char op)
{
	int		(*operations[5])(int, int);
	char	operators[5];
	int		i;

	operations[0] = addition;
	operations[1] = subtraction;
	operations[2] = multiplication;
	operations[3] = division;
	operations[4] = modulo;
	operators[0] = '+';
	operators[1] = '-';
	operators[2] = '*';
	operators[3] = '/';
	operators[4] = '%';
	i = 0;
	while (i < 5)
	{
		if (op == operators[i])
			return (operations[i](a, b));
		i++;
	}
	return (0);
}
