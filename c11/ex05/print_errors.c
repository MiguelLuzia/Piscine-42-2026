/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 21:11:49 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/23 09:09:37 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	print_div_error(void)
{
	write(1, "Stop : division by zero\n", 24);
}

void	print_mod_error(void)
{
	write(1, "Stop : modulo by zero\n", 22);
}
