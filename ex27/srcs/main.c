/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alparola <alparola@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 21:56:37 by alparola          #+#    #+#             */
/*   Updated: 2024/12/24 10:04:13 by alparola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lib.h"
#include <unistd.h>
#include <fcntl.h>

#define ERROR_1 "Too many arguments.\n"
#define ERROR_2 "File name missing.\n"
#define ERROR_3 "Cannot read file.\n"

int	open_file(char *filename)
{
	int	fd;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		ft_putstr(ERROR_3);
	return (fd);
}

void	read_file(int fd)
{
	char	buff[1];
	int		rbytes;

	rbytes = read(fd, &buff, 1);
	while (rbytes > 0)
	{
		ft_putchar(*buff);
		rbytes = read(fd, &buff, 1);
	}
	close(fd);
}

int	main(int argc, char **argv)
{
	int	fd;

	if (argc == 1)
		ft_putstr(ERROR_2);
	else if (argc > 2)
		ft_putstr(ERROR_1);
	else
	{
		fd = open_file(argv[1]);
		if (fd < 0)
			return (0);
		read_file(fd);
	}
	return (0);
}
