/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 12:12:51 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/24 16:55:15 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	unsigned char	arr[2048];
	int i = 0;
	while (i < 2048)
		arr[i++] = 0;

	int j = 0;
	int p = 0;
	unsigned char value = 0;
	int count;
	while (argv[1][j])
	{
		if (argv[1][j] == '>')
		{
			p++;
			value = arr[p];
		}
		if (argv[1][j] == '<')
		{
			p--;
			value = arr[p];
		}
		if (argv[1][j] == '+')
			value++;
		if (argv[1][j] == '-')
			value--;
		arr[p] = value;
		if (arr[p] == 0 && argv[1][j] == '[')
		{
			count = 1;
			j++;
			while (count != 0 && argv[1][j])
			{
				if (argv[1][j] == ']')
					count--;
				if (argv[1][j] == '[')
					count++;
				if (count == 0)
					continue;
				j++;
			}
		}
		else if (arr[p] != 0 && argv[1][j] == ']')
		{
			count = 1;
			j--;
			while (count != 0 && argv[1][j])
			{
				if (argv[1][j] == '[')
					count--;
				if (argv[1][j] == ']')
					count++;
				if (count == 0)
					continue;
				j--;
			}
		}
		if (argv[1][j] == '.')
		{
			char c = arr[p];
			write(1, &c, 1);
		}
		j++;
	}
}
