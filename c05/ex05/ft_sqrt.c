/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 11:52:59 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/14 15:36:20 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (nb > i * i)
		i++;
	if (nb == i * i)
		return ((int)i);
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_sqrt(2147483647));
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(-12321));
	printf("%d\n", ft_sqrt(2147395600));
}
*/
