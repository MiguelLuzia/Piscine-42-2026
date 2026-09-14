/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 12:02:49 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/06 12:47:09 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}

/*
#include <unistd.h>

int	main(void)
{
	int	c;
	int	d;
	int *pt1 = &c;
	int *pt2 = &d;

	c = 6;
	d = 3;
	ft_ultimate_div_mod(pt1, pt2);
	if (c == 2 && d == 0)
		write(1, "Test passed\n", 12);
	else
		write(1, "Test failed\n", 12);
}
*/