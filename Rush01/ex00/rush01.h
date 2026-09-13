/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 16:14:59 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/13 15:32:16 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# include <unistd.h>

void	ft_putchar(char c);
void	init_grid(int grid[4][4]);
int		parse_input(char *str, int clues[16]);
void	print_grid(int grid[4][4]);
void	print_error(void);
int		visible_count(int line[4]);
int		valid_in_row(int grid[4][4], int row, int value);
int		valid_in_col(int grid[4][4], int col, int value);
int		can_place(int grid[4][4], int row, int col, int value);
int		check_complete_grid(int grid[4][4], int clues[16]);
int		solve(int grid[4][4], int clues[16], int pos);

#endif