/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurigne <sdurigne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 15:01:10 by mdinis-d          #+#    #+#             */
/*   Updated: 2026/09/20 16:25:06 by sdurigne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	free_dict(t_entry *dict)
{
	t_entry	*next;

	while (dict)
	{
		next = dict->next;
		free(dict->key);
		free(dict->value);
		free(dict);
		dict = next;
	}
}
