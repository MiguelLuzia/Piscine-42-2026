/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 12:10:36 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/21 12:19:44 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*arr;

	i = 0;
	arr = (int *)malloc(length * sizeof(int));
	if (!arr)
		return (arr);
	while (i < length)
	{
		arr[i] = f(tab[i]);
		i++;
	}
	return (arr);
}

/*
#include <unistd.h>
int	x2(int nb)
{
	nb *= 2;
	return (nb);
}

#include <stdio.h>
int	main(void)
{
	int	tab[] = {3, 4, 5, 2};
	int *new_tab = ft_map(tab, 4, x2);
	int	i = 0;
	while (i < 4)
	{
		printf("%d ", new_tab[i++]);
	}
	free(new_tab);
}
*/
