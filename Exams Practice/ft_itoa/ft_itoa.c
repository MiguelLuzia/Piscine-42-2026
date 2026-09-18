/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 11:19:56 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/18 12:22:17 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	num_digits(int nbr)
{
	int	i = 1;
	if (nbr < 0)
	{
		nbr *= -1;
		i++;
	}
	while (nbr >= 10)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

void	fillnb(int nbr, char *nb, int *i)
{
	if (nbr >= 0 && nbr <= 9)
	{
		nb[*i] = nbr + '0';
		(*i)++;
	}
	if (nbr > 9)
	{
		fillnb(nbr / 10, nb, i);
		fillnb(nbr % 10, nb, i);
	}
}

void	int_min_case(char *nb, int *i)
{
	nb[*i] = '-';
	(*i)++;
	nb[*i] = '2';
	(*i)++;
	nb[*i] = '1';
	(*i)++;
	nb[*i] = '4';
	(*i)++;
	nb[*i] = '7';
	(*i)++;
	nb[*i] = '4';
	(*i)++;
	nb[*i] = '8';
	(*i)++;
	nb[*i] = '3';
	(*i)++;
	nb[*i] = '6';
	(*i)++;
	nb[*i] = '4';
	(*i)++;
	nb[*i] = '8';
	(*i)++;
	nb[*i] = '\0';
	(*i)++;
}

char	*ft_itoa(int nbr)
{
	int i = 0;
	char	*nb;
	if (!(nb = (char *)malloc(num_digits(nbr) * sizeof(char) + 1)))
		return (nb);
	if (nbr == -2147483648)
	{
		int_min_case(nb, &i);
		return (nb);
	}
	if (nbr < 0)
	{
		nbr *= -1;
		nb[i] = '-';
		i++;
	}
	if (nbr >= 0 && nbr <= 9)
	{
		nb[i] = nbr + '0';
		i++;
	}
	if (nbr > 9)
		fillnb(nbr, nb, &i);
	nb[i] = '\0';
	return (nb);
}

#include <stdio.h>
int	main(void)
{
	char	*nb = ft_itoa(-2147483648);
	printf("%s", nb);
	free(nb);
}
