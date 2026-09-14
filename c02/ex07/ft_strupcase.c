/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 19:11:13 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/07 19:49:10 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (('a' <= str[i] && str[i] <= 'z'))
			str[i] -= 32;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char str[] = "AaaaA 990909bbBB9..,, bbb";
	// ft_strupcase(str);
	// printf("%s", str);
	printf("%s", ft_strupcase(str));
}
*/
