/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 09:28:52 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/06 09:45:32 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*
#include <unistd.h>

int	main(void)
{
	int	n;

	n = 3;
	ft_ft(&n);
	if (n == 42)
		write(1, "Test passed\n", 12);
	else
		write(1, "Test failed\n", 12);
}
*/