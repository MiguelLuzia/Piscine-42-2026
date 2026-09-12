/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-paiv <pde-paiv@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 15:57:23 by pde-paiv          #+#    #+#             */
/*   Updated: 2026/09/06 16:06:28 by pde-paiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	rush(int x, int y);

int	main(int argc, char **argv)
{
	if (argc == 3 && atoi(argv[1]) > 0 && atoi(argv[2]) > 0)
	{
		rush(atoi(argv[1]), atoi(argv[2]));
	}
	else
	{
		write (1, "Invalid input: please type 2 positive whole numbers.", 52);
	}
}
