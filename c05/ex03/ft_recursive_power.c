/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 18:27:23 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/13 19:17:48 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_recursive_power(0, 0));
	printf("\n");
	printf("%d", ft_recursive_power(1, 99));
	printf("\n");
	printf("%d", ft_recursive_power(2, 3));
	printf("\n");
	printf("%d", ft_recursive_power(2, 0));
	printf("\n");
	printf("%d", ft_recursive_power(89, 1));
	printf("\n");
}
*/
