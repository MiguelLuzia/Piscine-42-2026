/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 09:29:04 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/24 09:39:00 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*elem;

	if (begin_list == NULL)
		return (0);
	i = 0;
	elem = begin_list;
	while (elem != NULL)
	{
		i++;
		elem = elem->next;
	}
	return (i);
}

/*
t_list	*ft_create_elem(void *data)
{
	t_list	*new_elem;

	new_elem = (t_list *)malloc(sizeof(t_list));
	if (!new_elem)
		return (new_elem);
	new_elem->data = data;
	new_elem->next = NULL;
	return (new_elem);
}
#include <stdio.h>
int	main(void)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;

	first = ft_create_elem("1st");
	second = ft_create_elem("2nd");
	third = ft_create_elem("3rd");
	first->next = second;
	second->next = third;
	printf("List size: %d\n", ft_list_size(first));
	free(third);
	free(second);
	free(first);
	return (0);
}
*/
