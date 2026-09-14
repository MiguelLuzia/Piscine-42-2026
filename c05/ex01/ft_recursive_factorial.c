/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 13:34:29 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/12 15:44:25 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_recursive_factorial(3));
	printf("\n");
	printf("%d", ft_recursive_factorial(4));
	printf("\n");
	printf("%d", ft_recursive_factorial(5));
	printf("\n");
	printf("%d", ft_recursive_factorial(10));
	printf("\n");
}
*/
