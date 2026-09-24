/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 19:24:55 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/24 08:10:22 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <libgen.h>

void	put_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(2, &str[i], 1);
		i++;
	}
}

void	print_error(char *program, char *file)
{
	put_str(program);
	put_str(": ");
	put_str(file);
	put_str(": ");
	put_str(strerror(errno));
	put_str("\n");
}

void	display_file(int fd)
{
	int		bytes_read;
	char	buffer[4096];

	bytes_read = read(fd, buffer, 4096);
	while (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
		bytes_read = read(fd, buffer, 4096);
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		fd;
	char	*program;

	program = basename(argv[0]);
	if (argc == 1)
	{
		display_file(0);
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
			print_error(program, argv[i]);
		else
		{
			display_file(fd);
			close(fd);
		}
		i++;
	}
	return (0);
}
