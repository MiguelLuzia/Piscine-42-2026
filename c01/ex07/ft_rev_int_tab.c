/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 16:42:26 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/06 18:42:03 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	start;
	int	end;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	int	numbers[] = {10, 20, 30, 40, 45, 50, 55};
	int	i;
	int	arr_len;
	
	arr_len = 7;
	ft_rev_int_tab(numbers, arr_len);
	i = 0;
	while (i < arr_len)
	{
		printf("%d ", numbers[i]);
		i++;
	}
	return (0);
}
*/