/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 16:25:56 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/12 19:56:20 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_str(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == ' ')
			i++;
		if (!str[i])
			break ;
		if (str[i] < '1' || str[i] > '4')
			return (0);
		j++;
		i++;
		if (str[i] && str[i] != ' ')
			return (0);
	}
	if (j == 16)
		return (1);
	return (0);
}
