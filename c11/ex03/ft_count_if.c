/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 08:51:35 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/22 09:02:13 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}

/*
int	is_a(char* str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (str[i] == 'a')
			return (1);
		i++;
	}
	return (0);
}

#include <stdio.h>
int	main(void)
{
	char *tab[] = {"Hello", "all", "sal"};
	int	result = ft_count_if(tab, 3, is_a);
	printf("%d", result);
}
*/
