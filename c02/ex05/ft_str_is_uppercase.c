/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 18:19:59 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/07 18:26:49 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!('A' <= str[i] && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int main()
{
	char str[] = "asasddsaddsad";
	char str1[] = "asd3asd";
	char str2[] = "AAdasd";
	char str3[] = "AABABAB";
	char str4[] = "32323,";

	printf("%s str is only uppercase? %d\n", str, ft_str_is_uppercase(str));
	printf("%s str is only uppercase? %d\n", str1, ft_str_is_uppercase(str1));
	printf("%s str is only uppercase? %d\n", str2, ft_str_is_uppercase(str2));
	printf("%s str is only uppercase? %d\n", str3, ft_str_is_uppercase(str3));
	printf("%s str is only uppercase? %d\n", str4, ft_str_is_uppercase(str4));
}
*/
