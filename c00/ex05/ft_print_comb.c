/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 10:32:13 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/04 13:01:55 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char one, char two, char three)
{
	write(1, &one, 1);
	write(1, &two, 1);
	write(1, &three, 1);
	if (one != '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	frst;
	char	scnd;
	char	thrd;

	frst = '0';
	while (frst <= '7')
	{
		scnd = frst + 1;
		while (scnd <= '8')
		{
			thrd = scnd + 1;
			while (thrd <= '9')
			{
				print(frst, scnd, thrd);
				thrd++;
			}
			scnd++;
		}
		frst++;
	}
}

/*
int	main(void)
{
	ft_print_comb();
}
*/