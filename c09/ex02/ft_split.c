/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 15:10:39 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/20 16:51:07 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	i;

	if (!charset)
		return (0);
	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	num_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset))
			i++;
		if (str[i] && !is_sep(str[i], charset))
		{
			count++;
			while (str[i] && !is_sep(str[i], charset))
				i++;
		}
	}
	return (count);
}

int	word_len(char *str, char *charset, int i)
{
	int	count;

	count = 0;
	while (str[i] && !is_sep(str[i], charset))
	{
		count++;
		i++;
	}
	return (count);
}

int	process(char *str, char *charset, char	**str_arr, int *loop)
{
	int	len;

	while (str[loop[0]])
	{
		while (str[loop[0]] && is_sep(str[loop[0]], charset))
			loop[0]++;
		if (!str[loop[0]])
			break ;
		len = word_len(str, charset, loop[0]);
		str_arr[loop[1]] = (char *)malloc((len + 1) * sizeof(char));
		if (!str_arr[loop[1]])
			return (0);
		loop[2] = 0;
		while (str[loop[0]] && !is_sep(str[loop[0]], charset))
		{
			str_arr[loop[1]][loop[2]] = str[loop[0]];
			(loop[0])++;
			(loop[2])++;
		}
		str_arr[loop[1]][loop[2]] = '\0';
		(loop[1])++;
	}
	return (1);
}

char	**ft_split(char *str, char *charset)
{
	char	**str_arr;
	int		loop[3];

	str_arr = (char **)malloc((num_words(str, charset) + 1) * sizeof(*str_arr));
	if (!str_arr)
		return (str_arr);
	loop[0] = 0;
	loop[1] = 0;
	loop[2] = 0;
	if (!process(str, charset, str_arr, loop))
		return (NULL);
	str_arr[loop[1]] = NULL;
	return (str_arr);
}

/*
	int		i; loop 0 => str[i] => str[loop[0]]
	int		a; loop 1 => str_arr[loop[1]]
	int		b; loop 2 => str_arr[loop[1]][loop[2]]
*/

/*
#include <stdio.h>
int	main(void)
{
	int i = 0;
	char	**arr = ft_split("Hello, my	name is  	 \nMiguel.", " 	\n");
	while (arr[i] != NULL)
	{
		printf("%s\n", arr[i]);
		i++;
	}
	free(arr);
}
*/
