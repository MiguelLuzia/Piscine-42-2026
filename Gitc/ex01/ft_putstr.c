/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 11:20:11 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/09 11:21:29 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	if (!*str)
		return ;
	write(1, str++, 1);
	ft_putstr(str);
}

/*
int	main(void)
{
	char	*str;

	str = "Hello";
	ft_putstr(str);
}
*/