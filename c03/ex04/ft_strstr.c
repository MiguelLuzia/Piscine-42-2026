/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 20:08:27 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/09 10:35:07 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	if (to_find[0] == 0)
		return (str);
	while (str[i])
	{
		n = 0;
		while (str[i + n] == to_find[n])
		{
			n++;
			if (!to_find[n])
				return (str + i);
		}
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "O gato está no tapete de gato.";
	char	str1[] = "gato";

	printf("%s", ft_strstr(str, str1));
}
*/
