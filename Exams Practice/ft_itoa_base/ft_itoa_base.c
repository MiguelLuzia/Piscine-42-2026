/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 10:40:25 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/24 12:10:11 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	num_digits(unsigned int nb, unsigned int base, int value)
{
	int	i = 1;

	if (value < 0 && base == 10)
		i++;
	while (nb >= base)
	{
		nb /= base;
		i++;
	}
	return (i);
}

void	processing(unsigned int nb, unsigned int base, char *real_base, char **str, int *i)
{
	if ((nb >= base))
		processing(nb / base, base, real_base, str, i);
	(*str)[*i] = real_base[nb % base];
	(*i)++;
}

char	*ft_itoa_base(int value, int base)
{
	char	*str;

	char	*full_base = "0123456789ABCDEF";
	if (!(base >= 2 && base <= 16))
		return (NULL);
	int i = 0;
	unsigned int	un_base = (unsigned int)base;
	char	*real_base = (char *)malloc(un_base * sizeof(char));
	while (i < base)
	{
		real_base[i] = full_base[i];
		i++;
	}
	i = 0;
	unsigned int	nb = (unsigned int)value;
	str = (char *)malloc((num_digits(nb, un_base, value) + 1) * sizeof(char));
	if (!str)
		return (str);
	if (value < 0 && base == 10)
	{
		nb = 0u - nb;
		str[i++] = '-';
	}
	processing(nb, un_base, real_base, &str, &i);
	str[i] = '\0';
	return (str);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%s", ft_itoa_base(-2147483648, 2));
}
*/
