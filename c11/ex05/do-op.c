/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 09:52:14 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/23 09:02:51 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	int	*nbs;

	if (argc != 4)
		return (0);
	nbs = parse_input(argv);
	if (!nbs)
		return (0);
	ft_putnbr(operation(nbs[0], nbs[1], argv[2][0]));
	ft_putchar('\n');
}
