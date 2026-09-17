/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 11:16:37 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/15 15:57:13 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	all_len(int size, char **arr)
{
	int	i;
	int	j;
	int	counter;

	i = 0;
	counter = 0;
	while (i < size)
	{
		j = 0;
		while (arr[i][j])
		{
			counter++;
			j++;
		}
		i++;
	}
	return (counter);
}

void	ft_copy(char *src, char *dest, int *pos)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[*pos] = src[i];
		(*pos)++;
		i++;
	}
}

char	*ft_empty(void)
{
	char	*str;

	str = malloc(1);
	if (str == NULL)
		return (NULL);
	str[0] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		k;
	char	*str;

	i = 0;
	k = 0;
	if (size == 0)
		return (ft_empty());
	str = (char *)malloc(ft_strlen(sep) * (size - 1) + all_len(size, strs) + 1);
	if (str == NULL)
		return (str);
	while (i < size)
	{
		ft_copy(strs[i], str, &k);
		if (i < size - 1)
			ft_copy(sep, str, &k);
		i++;
	}
	str[k] = '\0';
	return (str);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*array[] = {"Hello", "how", "are", "you?"};
	char	*str = ft_strjoin(4, array, " ");

	int	i = 0;
	while (str[i])
	{
		printf("%c", str[i]);
		i++;
	}
	free(str);
}
*/
