/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 08:24:50 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/24 09:16:37 by mitavare         ###   ########.fr       */
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

/*
#include <stdio.h>
int	main(void)
{
	t_list	*elem;
	char	*text;

	text = "Hello";

	elem = ft_create_elem(text);
	if (elem == NULL)
	{
		printf("Error\n");
		return (1);
	}
	elem->next = ft_create_elem("World");
	if (elem->next == NULL)
	{
		printf("Error\n");
		free(elem);
		return (1);
	}
	printf("Data string: %s\n", (char *)elem->data);
	printf("Next data: %s\n", (char *)elem->next->data);
	printf("Next pointer: %p\n", (void *)elem->next);
	free(elem);
	return (0);
}
*/
