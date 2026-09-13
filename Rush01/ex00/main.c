/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 10:14:46 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/13 15:11:45 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	main(int argc, char **argv)
{
	int	clues [16];
	int	grid[4][4];

	if (argc != 2 || !parse_input(argv[1], clues))
	{
		print_error();
		return (1);
	}
	init_grid(grid);
	if (solve(grid, clues, 0))
		print_grid(grid);
	else
		print_error();
	return (0);
}
