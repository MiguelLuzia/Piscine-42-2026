/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 14:57:17 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/13 18:30:42 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	base;

	base = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb *= base;
		power--;
	}
	return (nb);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_power(0, 0));
	printf("\n");
	printf("%d", ft_iterative_power(1, 99));
	printf("\n");
	printf("%d", ft_iterative_power(2, 3));
	printf("\n");
	printf("%d", ft_iterative_power(2, 0));
	printf("\n");
	printf("%d", ft_iterative_power(89, 1));
	printf("\n");
}
*/
