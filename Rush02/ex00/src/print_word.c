/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurigne <sdurigne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 15:02:34 by mdinis-d          #+#    #+#             */
/*   Updated: 2026/09/20 16:28:25 by sdurigne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	print_word(t_entry *dict, char *key, t_ctx *ctx)
{
	t_entry	*entry;

	entry = find_entry(dict, key);
	if (!entry)
		return (0);
	if (!ctx->check_only)
	{
		if (!ctx->first)
			ft_putchar(' ');
		ft_putstr(entry->value);
	}
	ctx->first = 0;
	return (1);
}
