/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_entry.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinis-d <mdinis-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 15:01:06 by mdinis-d          #+#    #+#             */
/*   Updated: 2026/09/20 15:01:07 by mdinis-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_entry	*find_entry(t_entry *dict, char *key)
{
	while (dict)
	{
		if (ft_strcmp(dict->key, key) == 0)
			return (dict);
		dict = dict->next;
	}
	return (NULL);
}
