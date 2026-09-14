/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 10:50:37 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/06 11:48:00 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <unistd.h>

int	main(void)
{
	int	result;
	int	rest;
	int *pt1 = &result;
	int *pt2 = &rest;
	result = 3;
	rest = 4;
	ft_div_mod(6, 3, pt1, pt2);
	if (result == 2 && rest == 0)
		write(1, "Test passed\n", 12);
	else
		write(1, "Test failed\n", 12);
}
*/