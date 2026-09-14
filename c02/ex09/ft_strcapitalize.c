/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 19:57:59 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/08 08:10:19 by mitavare         ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	i = 0;
	if (('a' <= str[i] && str[i] <= 'z'))
	{
		str[i] -= 32;
		i++;
	}
	while (str[i])
	{
		if (!(('A' <= str[i - 1] && str[i - 1] <= 'Z')
				|| ('a' <= str[i - 1] && str[i - 1] <= 'z')
				|| ('0' <= str[i - 1] && str[i - 1] <= '9')))
		{
			if (('a' <= str[i] && str[i] <= 'z'))
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char str[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	char str1[] = "42a aa aAAaaaaAA.. sdA+a+a AAa";
	// ft_strlowcase(str);
	// printf("%s", str);
	printf("%s", ft_strcapitalize(str));
	printf("\n");
	printf("%s", ft_strcapitalize(str1));
}
*/