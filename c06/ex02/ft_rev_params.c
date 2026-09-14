/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 15:50:11 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/11 09:16:20 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = argc - 1;
	if (argc > 1)
	{
		while (argv[i] && i != 0)
		{
			j = 0;
			while (argv[i][j])
			{
				ft_putchar(argv[i][j]);
				j++;
			}
			i--;
			ft_putchar('\n');
		}
	}
}
