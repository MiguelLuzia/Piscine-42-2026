/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 14:09:07 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/12 12:24:27 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[i + j])
		{
			if (base[i] == base[i + j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	write_nbr(unsigned int nb, char *base)
{
	unsigned int	b_size;

	b_size = check(base);
	if (nb >= b_size)
		write_nbr(nb / b_size, base);
	ft_putchar(base[nb % b_size]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	nb;

	if (!(check(base) > 1))
		return ;
	nb = (unsigned int)nbr;
	if (nbr < 0)
	{
		ft_putchar('-');
		nb = 0u - nb;
	}
	write_nbr(nb, base);
}

/*
int	main(void)
{
	ft_putnbr_base(-2147483648, "0123456789");
	ft_putchar('\n');
	ft_putnbr_base(45, "01");
}
*/
