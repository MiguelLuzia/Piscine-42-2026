/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 15:22:13 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/07 17:36:27 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(('A' <= str[i] && str[i] <= 'Z')
				|| ('a' <= str[i] && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int main()
{
	char str[] = "asdasd";
	char str1[] = "asd3asd  ";
	char str2[] = "AAdasd";
	char str3[] = "AAAADSSDS";
	char str4[] = "432432";

	printf("%s this str contains only alpha? %d\n", str, ft_str_is_alpha(str));
	printf("%s this str contains only alpha? %d\n", str1, ft_str_is_alpha(str1));
	printf("%s this str contains only alpha? %d\n", str2, ft_str_is_alpha(str2));
	printf("%s this str contains only alpha? %d\n", str3, ft_str_is_alpha(str3));
	printf("%s this str contains only alpha? %d\n", str4, ft_str_is_alpha(str4));

}
*/
