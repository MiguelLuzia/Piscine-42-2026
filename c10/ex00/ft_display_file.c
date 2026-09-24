/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitavare <mitavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 17:40:26 by mitavare          #+#    #+#             */
/*   Updated: 2026/09/24 08:15:53 by mitavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	argc_errors(int ac)
{
	if (ac == 1)
	{
		write(1, "File name missing.\n", 19);
		return (0);
	}
	if (ac > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int		fd;
	int		bytes_read;
	char	buffer[1024];

	if (!argc_errors(argc))
		return (0);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write (1, "Cannot read file.\n", 18);
		return (0);
	}
	bytes_read = read(fd, buffer, 1024);
	while (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
		bytes_read = read(fd, buffer, 1024);
	}
	close(fd);
	if (bytes_read == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (1);
	}
}
