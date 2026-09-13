/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 10:14:57 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/13 15:11:21 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	parse_input(char *str, int clues[16])
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (str[i])
	{
		while (str[i] == ' ')
			i++;
		if (!str[i])
			break ;
		if (str[i] < '1' || str[i] > '4')
			return (0);
		if (counter >= 16)
			return (0);
		clues[counter] = str[i] - '0';
		counter++;
		i++;
		if (str[i] && str[i] != ' ')
			return (0);
	}
	return (counter == 16);
}

int	check_row(int grid[4][4], int clues[16], int row)
{
	int	line[4];
	int	col;

	col = 0;
	while (col < 4)
	{
		line[col] = grid[row][col];
		col++;
	}
	if (visible_count(line) != clues[8 + row])
		return (0);
	col = 0;
	while (col < 4)
	{
		line[col] = grid[row][3 - col];
		col++;
	}
	if (visible_count(line) != clues[12 + row])
		return (0);
	return (1);
}

int	check_col(int grid[4][4], int clues[16], int col)
{
	int	line[4];
	int	row;

	row = 0;
	while (row < 4)
	{
		line[row] = grid[row][col];
		row++;
	}
	if (visible_count(line) != clues[col])
		return (0);
	row = 0;
	while (row < 4)
	{
		line[row] = grid[3 - row][col];
		row++;
	}
	if (visible_count(line) != clues[4 + col])
		return (0);
	return (1);
}

int	check_complete_grid(int grid[4][4], int clues[16])
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		if (!check_row(grid, clues, row))
			return (0);
		row++;
	}
	col = 0;
	while (col < 4)
	{
		if (!check_col(grid, clues, col))
			return (0);
		col++;
	}
	return (1);
}
