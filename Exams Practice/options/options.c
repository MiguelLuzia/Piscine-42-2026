/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   options.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 16:58:42 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/24 18:22:51 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char **str_arr, int arr_len)
{
	int i = 1;
	int j;

	if (arr_len == 1)
	{
		write(1, "options: abcdefghijklmnopqrstuvwxyz\n", 36);
		return (0);
	}
	while (arr_len > i)
	{
		j = 0;
		if (str_arr[i][0] != '-')
		{
			write(1, "Invalid Option\n", 15);
			return (0);
		}
		j++;
		if (!str_arr[i][j])
		{
			write(1, "Invalid Option\n", 15);
			return (0);
		}
		while (str_arr[i][j])
		{
			if (!(str_arr[i][j] >= 'a' && str_arr[i][j] <= 'z'))
			{
				write(1, "Invalid Option\n", 15);
				return (0);
			}
				if (str_arr[i][j] == 'h')
			{
				write(1, "options: abcdefghijklmnopqrstuvwxyz\n", 36);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

char	*initialize_list(void)
{
	static char list[36];
	int i = 0;
	int a = 0;
	int b;
	while (a < 4)
	{
		b = 8;
		while (b > 0)
		{
			list[i++] = '0';
			b--;
		}
		if (a != 3)
			list[i++] = ' ';
		a++;
	}
	return (list);
}

int	main(int argc, char **argv)
{
	if (!check(argv, argc))
		return (0);

	char	*binary_list = initialize_list();
	char	*char_list = "******zy xwvutsrq ponmlkji hgfedcba";

	int i = 1;
	int j;
	int k;
	while (argc > i)
	{
		j = 1;
		while (argv[i][j])
		{
			k = 0;
			while (char_list[k] && char_list[k] != argv[i][j])
			{
				k++;
			}
			if (char_list[k] == argv[i][j])
				binary_list[k] = '1';
			j++;
		}
		i++;
	}
	write(1, binary_list, 35);
	write(1, "\n", 1);
}
