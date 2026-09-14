/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 19:00:53 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/06 20:00:12 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a < size)
	{
		b = 0;
		while (b < (size - 1))
		{
			if (tab[b] > tab[b + 1])
			{
				temp = tab[b];
				tab[b] = tab[b + 1];
				tab[b + 1] = temp;
			}
			b++;
		}
		a++;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	int	numbers[] = {55, 40, 33, 41, 10, 50, 12};
	int	i;
	int	arr_len;
	
	arr_len = 7;
	ft_sort_int_tab(numbers, arr_len);
	i = 0;
	while (i < arr_len)
	{
		printf("%d ", numbers[i]);
		i++;
	}
	return (0);
}
*/