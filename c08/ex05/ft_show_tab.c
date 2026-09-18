/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 08:49:47 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/17 13:48:07 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

int	fill_number(int size, char *str, int i)
{
	if (size >= 10)
		i = fill_number(size / 10, str, i);
	str[i++] = '0' + (size % 10);
	return (i);
}

char	*sizesize(int size)
{
	static char	str[12];
	int			i;

	i = 0;
	if (size == 0)
		str[i++] = '0';
	else
	{
		if (size < 0)
		{
			str[i++] = '-';
			size = -size;
		}
		i = fill_number(size, str, i);
	}
	str[i] = '\0';
	return (str);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	if (par == NULL)
		return ;
	while (par[i].str != 0)
	{
		write(1, par[i].str, par[i].size);
		write(1, "\n", 1);
		write(1, sizesize(par[i].size), ft_len(sizesize(par[i].size)));
		write(1, "\n", 1);
		write(1, par[i].copy, par[i].size);
		write(1, "\n", 1);
		i++;
	}
}

/*
#include <stdlib.h>
int	main(void)
{
	char	*av[] = {"Hello", "How are you", "My name is Miguel"};
	int	ac = 3;
	t_stock_str	*matrix = ft_strs_to_tab(ac, av);
	ft_show_tab(matrix);
	int i = 0;
	while (i < ac)
	{
		free(matrix[i].copy);
		i++;
	}
	free(matrix);
}
*/
