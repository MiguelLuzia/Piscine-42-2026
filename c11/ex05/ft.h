/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 20:56:56 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/23 09:04:55 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>

void	ft_putchar(char c);
int		*parse_input(char **input);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
void	ft_putnbr(int nb);
int		operation(int a, int b, char op);
void	print_div_error(void);
void	print_mod_error(void);

int		addition(int a, int b);
int		subtraction(int a, int b);
int		multiplication(int a, int b);
int		division(int a, int b);
int		modulo(int a, int b);

#endif
