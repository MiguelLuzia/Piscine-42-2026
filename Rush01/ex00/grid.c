/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 10:14:54 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/13 15:12:07 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	init_grid(int grid[4][4])
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			grid[row][col] = 0;
			col++;
		}
		row++;
	}
}

int	visible_count(int line[4])
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	while (i < 4)
	{
		if (line[i] > max)
		{
			max = line[i];
			count++;
		}
		i++;
	}
	return (count);
}

int	valid_in_row(int grid[4][4], int row, int value)
{
	int	col;

	col = 0;
	while (col < 4)
	{
		if (grid[row][col] == value)
			return (0);
		col++;
	}
	return (1);
}

int	valid_in_col(int grid[4][4], int col, int value)
{
	int	row;

	row = 0;
	while (row < 4)
	{
		if (grid[row][col] == value)
			return (0);
		row++;
	}
	return (1);
}

int	can_place(int grid[4][4], int row, int col, int value)
{
	if (!valid_in_row(grid, row, value)
		|| !valid_in_col(grid, col, value))
		return (0);
	return (1);
}
