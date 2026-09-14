/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 17:44:21 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/07 17:47:02 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!('0' <= str[i] && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int main()
{
	char str[] = "432343234";
	char str1[] = "asd3asd  ";
	char str2[] = "AAdasd";

	printf("%s str contains only numeric? %d\n", str, ft_str_is_numeric(str));
	printf("%s str contains only numeric? %d\n", str1, ft_str_is_numeric(str1));
	printf("%s str contains only numeric? %d\n", str2, ft_str_is_numeric(str2));
}
*/
