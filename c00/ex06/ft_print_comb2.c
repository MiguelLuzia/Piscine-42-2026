/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 13:44:11 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/05 13:40:51 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	frst;
	int	scnd;

	frst = 0;
	while (frst <= 99)
	{
		scnd = frst + 1;
		while (scnd <= 99)
		{
			ft_putchar(frst / 10 + '0');
			ft_putchar(frst % 10 + '0');
			ft_putchar(' ');
			ft_putchar(scnd / 10 + '0');
			ft_putchar(scnd % 10 + '0');
			if (!(frst == 98 & scnd == 99))
			{
				write(1, ", ", 2);
			}
			scnd++;
		}
		frst++;
	}
}


int	main(void)
{
	ft_print_comb2();
}

