/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 17:53:35 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/07 17:57:31 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!('a' <= str[i] && str[i] <= 'z'))
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

	printf("%s str is only lowercase? %d\n", str, ft_str_is_lowercase(str));
	printf("%s str is only lowercase? %d\n", str1, ft_str_is_lowercase(str1));
	printf("%s str is only lowercase? %d\n", str2, ft_str_is_lowercase(str2));
	printf("%s str is only lowercase? %d\n", str3, ft_str_is_lowercase(str3));
	printf("%s str is only lowercase? %d\n", str4, ft_str_is_lowercase(str4));
}
*/
