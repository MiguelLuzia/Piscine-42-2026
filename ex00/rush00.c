/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-paiv <pde-paiv@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 15:58:35 by pde-paiv          #+#    #+#             */
/*   Updated: 2026/09/06 16:06:35 by pde-paiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c );

void	build_row( char start, char middle, char end, int columns )
{
	int	i;

	ft_putchar(start);
	if (columns != 1)
	{
		i = 0;
		while (i < columns - 2)
		{
			ft_putchar(middle);
			i++;
		}
		ft_putchar(end);
	}
}

void	build_square( char sq_params[7], int columns, int rows )
{
	int	i;

	build_row(sq_params[3], sq_params[0], sq_params[4], columns);
	if (rows != 1)
	{
		i = 0;
		while (i < rows - 2)
		{
			ft_putchar('\n');
			build_row(sq_params[2], ' ', sq_params[2], columns);
			i++;
		}
		ft_putchar('\n');
		build_row(sq_params[5], sq_params[1], sq_params[6], columns);
	}
}

void	rush(int x, int y )
{
	char	sq_params[7];

	sq_params[0] = '-';
	sq_params[1] = '-';
	sq_params[2] = '|';
	sq_params[3] = 'o';
	sq_params[4] = 'o';
	sq_params[5] = 'o';
	sq_params[6] = 'o';
	if (x <= 0 || y <= 0)
	{
		write(1, "Invalid input: please type 2 positive whole numbers.\n", 53);
	}
	else
	{
		build_square(sq_params, x, y);
		ft_putchar('\n');
	}
}
	/*sq_params[0] = '*'; top_fill 
	sq_params[1] = '*'; bottom_fill 
	sq_params[2] = '*'; side_columns 
	sq_params[3] = '/'; top_left 
	sq_params[4] = '\\'; top_right
	sq_params[5] = '\\'; bottom_left
	sq_params[6] = '/'; bottom_right */
