/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 18:09:39 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/15 10:45:52 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;

	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (range);
	}
	range = (int *)malloc(sizeof(int) * (max - min));
	if (range == NULL)
		return (NULL);
	while (i < max - min)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}

/*
#include <stdio.h>
int	main(void)
{
	int	min = -10;
	int	max = 10;
	int	i = 0;
	int *array = ft_range(min, max);

	while (i < max - min)
	{
		printf("%d ", array[i]);
		i++;
	}
}
*/
