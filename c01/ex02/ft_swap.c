/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 09:55:55 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/06 12:02:06 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
#include <unistd.h>

int	main(void)
{
	int	c;
	int	d;
	int *pt1 = &c;
	int *pt2 = &d;

	c = 1;
	d = 5;
	ft_swap(pt1, pt2);
	if (c == 5 && d == 1)
		write(1, "Test passed\n", 12);
	else
		write(1, "Test failed\n", 12);
}
*/
