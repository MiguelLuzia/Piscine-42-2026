/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 10:04:50 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/21 12:10:49 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*
#include <unistd.h>
void	put_number(int nb)
{
	char	c;

	c = nb + '0';
	write(1, &c, 1);
}

#include <stdio.h>
int	main(void)
{
	int	tab[] = {3, 4, 5, 2};
	ft_foreach(tab, 4, put_number);

}
*/
