/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurigne <sdurigne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 15:02:02 by mdinis-d          #+#    #+#             */
/*   Updated: 2026/09/20 18:33:22 by sdurigne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	print_number(char *number, t_entry *dict, t_ctx *ctx)
{
	int		loads[9];
	char	group[4];
	char	scale[64];

	if (number[0] == '0')
		return (print_word(dict, "0", ctx));
	loads[0] = ft_len(number);
	loads[1] = loads[0] % 3;
	if (loads[1] == 0)
		loads[1] = 3;
	loads[2] = (loads[0] + 2) / 3;
	loads[3] = 0;
	while (loads[3] < loads[2])
	{
		if (loads[3] == 0)
		{
			loads[4] = 0;
			loads[5] = loads[1];
		}
		else
		{
			loads[4] = loads[1] + ((loads[3] - 1) * 3);
			loads[5] = 3;
		}
		loads[8] = 0;
		while (loads[8] < 3)
			group[loads[8]++] = '0';
		loads[8] = 0;
		while (loads[8] < loads[5])
		{
			group[3 - loads[5] + loads[8]] = number[loads[4] + loads[8]];
			loads[8]++;
		}
		group[3] = '\0';
		loads[7] = (group[0] == '0' && group[1] == '0' && group[2] == '0');
		if (!loads[7])
		{
			if (!print_under_1000(group, dict, ctx))
				return (0);
			loads[6] = loads[2] - loads[3] - 1;
			if (loads[6] > 0)
			{
				if (!make_scale_key(scale, 64, loads[6]))
					return (0);
				if (!print_word(dict, scale, ctx))
					return (0);
			}
		}
		loads[3]++;
	}
	return (1);
}

// len, first_len, groups, g, start, width, power, all_zero, i