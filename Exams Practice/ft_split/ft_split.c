/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 09:54:45 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/18 11:08:07 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	num_words(char *str)
{
	int	i = 0;
	int	count = 0;

	while(str[i])
	{
		while ((str[i] == ' ' || str[i] == '	' || str[i] == '\n') && str[i])
			i++;
		if (!(str[i] == ' ' || str[i] == '	' || str[i] == '\n') && str[i])
		{
			count++;
			while (!(str[i] == ' ' || str[i] == '	' || str[i] == '\n') && str[i])
				i++;
		}
	}
	return (count);
}

int	all_words_len(char *str)
{
	int	i = 0;
	int	count = 0;

	while(str[i])
	{
		while ((str[i] == ' ' || str[i] == '	' || str[i] == '\n') && str[i])
			i++;
		while (!(str[i] == ' ' || str[i] == '	' || str[i] == '\n') && str[i])
		{
			count++;
			i++;
		}
	}
	return (count);
}

char	**ft_split(char *str)
{
	int word_num = num_words(str);
	int all_text = all_words_len(str);
	char **str_arr;
	if (!(str_arr = (char **)malloc((word_num + 1) * sizeof(*str_arr) + all_text + word_num)))
		return (str_arr);

	int	i = 0;
	int	a = 0;
	int	b;

	char *text = (char *)(str_arr + word_num + 1);
	while(str[i])
	{
		while ((str[i] == ' ' || str[i] == '	' || str[i] == '\n') && str[i])
			i++;
		b = 0;
		if (!str[i])
			break;
		str_arr[a] = text;
		while (!(str[i] == ' ' || str[i] == '	' || str[i] == '\n') && str[i])
		{
			str_arr[a][b] = str[i];
			i++;
			b++;
		}
		str_arr[a][b] = '\0';
		a++;
		text += b + 1;
	}
	str_arr[a] = NULL;
	return (str_arr);
}


#include <stdio.h>
int	main(void)
{
	int i = 0;
	char	**arr = ft_split("Hello, my	name is \nMiguel.");
	while (arr[i] != NULL)
	{
		printf("%s\n", arr[i]);
		i++;
	}
	free(arr);
}
