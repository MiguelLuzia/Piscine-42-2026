/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 12:29:18 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/08 14:17:20 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n)
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
#include <stdio.h>

int	main(void)
{
	// char *a = "Hell";
	char *a = "Heoll";
	// char *a = "😀";
	// char *a = "Hello";
	char *b = "Hello";

	int n = 2;
	if (ft_strncmp(a, b, n) == 0)
		printf("Equal strings\n");
	else
		printf("Not equal strings\n");
	printf("Return value: %d", ft_strncmp(a, b, n));

}
*/
