/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 09:34:32 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/23 09:41:27 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_arrlen(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	char	*temp;
	int		a;
	int		b;

	a = 0;
	b = 0;
	while (tab[a])
	{
		b = 0;
		while (b < (ft_arrlen(tab) - 1))
		{
			if (cmp(tab[b], tab[b + 1]) > 0)
			{
				temp = tab[b];
				tab[b] = tab[b + 1];
				tab[b + 1] = temp;
			}
			b++;
		}
		a++;
	}
}

/*
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

#include <stdlib.h>
#include <stdio.h>
int	main(void)
{
	char	*arr[] = {"casa", "carro", "casamento", "all", NULL};
	int i = 0;
	ft_advanced_sort_string_tab(arr, ft_strcmp);
	while (arr[i])
		printf("%s\n", arr[i++]);
}
*/
