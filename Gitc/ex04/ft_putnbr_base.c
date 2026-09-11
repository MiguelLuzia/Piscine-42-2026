/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 14:09:07 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/11 13:53:28 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*return_char(int nb, char *base)
{
	char	str[12];
	int	i;

	i = 0;
	if (nb == -2147483648)
		return ("-2147483648");
	else
	{
		if (nb < 0)
		{
			str[0] = '-';
			nb *= -1;
			i++;
		}
		if (nb >= 0 && nb <= 9)
		{
			str[i] = (nb + '0');
			i++;
		}
		if (nb > 9)
		{
			return_char(nb / 10);
			return_char(nb % 10);
		}
	}
	return (str);
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

void	ft_putnbr_base(int nbr, char *base)
{
	if(!(check(base) > 1))
		return ;
}

int	main(void)
{
	ft_putnbr_base(42, "0123456789");
}
