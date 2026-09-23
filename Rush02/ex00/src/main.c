/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinis-d <mdinis-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 17:26:21 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/20 15:01:50 by mdinis-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	char	*number;
	char	*dict_name;
	t_entry	*dict;
	t_ctx	ctx;
	int		status;

	if (argc != 2 && argc != 3)
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (argc == 2)
		dict_name = "numbers.dict";
	else
		dict_name = argv[1];
	if (argc == 2)
		number = normalize_input(argv[1]);
	else
		number = normalize_input(argv[2]);
	if (!number)
	{
		ft_putstr("Error\n");
		return (0);
	}
	dict = load_dict(dict_name, &status);
	if (!dict || status == 0)
	{
		free(number);
		ft_putstr("Dict Error\n");
		return (0);
	}
	ctx.first = 1;
	ctx.check_only = 1;
	if (!print_number(number, dict, &ctx))
	{
		free_dict(dict);
		free(number);
		ft_putstr("Dict Error\n");
		return (0);
	}
	ctx.first = 1;
	ctx.check_only = 0;
	print_number(number, dict, &ctx);
	ft_putchar('\n');
	free_dict(dict);
	free(number);
}
