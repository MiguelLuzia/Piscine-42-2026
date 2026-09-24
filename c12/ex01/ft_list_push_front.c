/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 08:56:23 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/24 09:28:29 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

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

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new_elem;

	if (begin_list == NULL)
		return ;
	new_elem = ft_create_elem(data);
	if (new_elem == NULL)
		return ;
	new_elem->next = *begin_list;
	*begin_list = new_elem;
}

/*
#include <stdio.h>
int	main(void)
{
	t_list	*elem;
	char	*text;

	text = " World!";
	elem = ft_create_elem(text);

	ft_list_push_front(&elem, "Hello");
	printf("Data string: %s\n", (char *)elem->data);
	printf("Next data: %s\n", (char *)elem->next->data);
	printf("Next pointer: %p\n", (void *)elem->next);
	free(elem);
	return (0);
}
*/
