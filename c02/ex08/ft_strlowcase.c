/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 19:50:17 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/07 19:53:58 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (('A' <= str[i] && str[i] <= 'Z'))
			str[i] += 32;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char str[] = "AaaaA 990909bbBB9..,, bbb";
	// ft_strlowcase(str);
	// printf("%s", str);
	printf("%s", ft_strlowcase(str));
}
*/
