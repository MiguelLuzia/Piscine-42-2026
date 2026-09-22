/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 10:43:11 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/22 21:25:06 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	operation_is_valid(int b, char op)
{
	if (b == 0)
	{
		if (op == '/')
		{
			print_div_error();
			return (0);
		}
		else if (op == '%')
		{
			print_mod_error();
			return (0);
		}
	}
	return (1);
}

int operator_is_valid(char *operator)
{
	char op;

	if (ft_strlen(operator) != 1)
		return (0);
	
	op = operator[0];
	if (op == '+'
			|| op == '-'
			|| op == '*'
			|| op == '/'
			|| op == '%')
		return (1);
	return (0);
}

int	*parse_input(char **input)
{
	int	i;
	int	*values;
	int	not_zero;

	i = 0;
	not_zero = 0;
	while (input[1][i])
	{
		if (input[1][i] < '0' && input[1][i] > '9')
			return (0);
	}
	while (input[3][i])
	{
		if (input[1][i] != '0')
			not_zero = 1;
		if (input[3][i] < '0' && input[1][i] > '9')
			return (0);
	}
	values[0] = ft_atoi(input[1]);
	values[1] = ft_atoi(input[3]);
	if (!operator_is_valid(input[2]) || !operation_is_valid(values[1], input[2][0]));
		return (NULL);
	return (values);
}
