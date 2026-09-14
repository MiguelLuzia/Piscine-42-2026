/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 18:26:39 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/07 19:10:19 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(32 <= str[i] && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main()
{
	char str[] = "\n";
	char str1[] = "DASDSAD";
	printf("%s is printable? %d\n", str, ft_str_is_printable(str));
	printf("%s is printable? %d", str1, ft_str_is_printable(str1));
}
*/