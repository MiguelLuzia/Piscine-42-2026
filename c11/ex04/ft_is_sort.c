/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 09:03:52 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/22 09:25:22 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	direction;
	int	result;

	i = 0;
	direction = 0;
	while (i < length - 1)
	{
		result = f(tab[i], tab[i + 1]);
		if (result > 0)
		{
			if (direction == 1)
				return (0);
			direction = -1;
		}
		else if (result < 0)
		{
			if (direction == -1)
				return (0);
			direction = 1;
		}
		i++;
	}
	return (1);
}

/*
int	compare(int a, int b)
{
	return (a - b);
}

#include <stdio.h>
int	main(void)
{
	int	tab[] = {1, 2, 3, 4};
	printf("%d", ft_is_sort(tab, 4, compare));
}
*/
