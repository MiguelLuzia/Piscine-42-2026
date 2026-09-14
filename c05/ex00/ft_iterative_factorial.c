/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 13:30:58 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/12 14:09:01 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (i > 1)
	{
		nb *= i;
		i--;
	}
	return (nb);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_factorial(3));
	printf("\n");
	printf("%d", ft_iterative_factorial(4));
	printf("\n");
	printf("%d", ft_iterative_factorial(5));
	printf("\n");
	printf("%d", ft_iterative_factorial(10));
	printf("\n");
}
*/
