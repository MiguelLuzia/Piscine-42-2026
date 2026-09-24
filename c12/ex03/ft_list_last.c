/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 09:40:07 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/24 09:53:58 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	int		i;
	t_list	*elem;

	if (!begin_list)
		return (begin_list);
	i = 0;
	elem = begin_list;
	while (elem->next != NULL)
		elem = elem->next;
	return (elem);
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
	t_list	*last;

	first = ft_create_elem("1st");
	second = ft_create_elem("2nd");
	third = ft_create_elem("3rd");
	first->next = second;
	second->next = third;
	last = ft_list_last(first);
	printf("Last element: %s\n", (char *)last->data);
	free(third);
	free(second);
	free(first);
	return (0);
}
*/
