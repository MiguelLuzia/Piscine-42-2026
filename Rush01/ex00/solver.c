/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 10:14:50 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/13 15:10:48 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	solve(int grid[4][4], int clues[16], int pos)
{
	int	row;
	int	col;
	int	value;

	if (pos == 16)
		return (check_complete_grid(grid, clues));
	row = pos / 4;
	col = pos % 4;
	value = 1;
	while (value <= 4)
	{
		if (can_place(grid, row, col, value))
		{
			grid[row][col] = value;
			if (solve(grid, clues, pos + 1))
				return (1);
			grid[row][col] = 0;
		}
		value++;
	}
	return (0);
}
