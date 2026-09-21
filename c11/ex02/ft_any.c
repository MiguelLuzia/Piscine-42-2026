/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 12:19:31 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/21 12:41:02 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_any(char **tab, int(*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
	{
		if (f(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}

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

// #include <stdio.h>
// int	main(void)
// {
// 	char *tab[] = {"Hello", "sll", NULL};
// 	int	result = ft_any(tab, is_a);
// 	printf("%d", result);
// }
