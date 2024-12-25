/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alparola <alparola@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 11:05:46 by alparola          #+#    #+#             */
/*   Updated: 2024/12/20 20:57:15 by alparola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <math.h>
#include "main.h"

void	print_range(int *range)
{
	printf("address:%p\n", range);
	while (*range)
	{
		printf("numero: %i\n", *range);
		range++;
	}
}

void	putnbr(int nb)
{
	printf("%i\n", nb);
}

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

void	do_test_14()
{
	printf("Printing numbers from -1 to 1000, (Only true square root's\n");
	for (int nb = -1; nb < 1000; nb++)
	{
		if (ft_sqrt(nb) > 0)
		{
			printf("ft_sqrt from %i == ft: %i original: %i\n", nb, ft_sqrt(nb), (int)sqrt(nb));
		}
	}
}

void	do_test_20()
{
	char	*str1 = "cstring 1";
	char	*str2 = 0;

	printf("str1:[%s] str2:[%s]\n", str1, str2);
	str2 = ft_strdup(str1);
	printf("str1:[%s] str2:[%s]\n", str1, str2);
	if (str2)
		free(str2);
	str2 = 0;
	printf("original:\n");
	printf("str1:[%s] str2:[%s]\n", str1, str2);
	str2 = strdup(str1);
	printf("str1:[%s] str2:[%s]\n", str1, str2);
	if (str2)
		free(str2);
}

void	do_test_21()
{
	printf("generando rango de numeros del 1 al 9 ...\n");
	int	*range = ft_range(1, 10);
	print_range(range);
	if (range)
		free(range);
	printf("generando rango de numeros del 9 al 11 ...\n");
	range = ft_range(9, 12);
	print_range(range);
	if (range)
		free(range);
	printf("generando rango de numeros del -100 al -91 ...\n");
	range = ft_range(-100, -92);
	print_range(range);
	if (range)
		free(range);
}

void	do_test_22()
{
	printf("Macro ABS of 55  : %i\n", ABS(55));
	printf("Macro ABS of -44 : %i\n", ABS(-44));
}

void	do_test_23()
{
	t_point	point;
	set_point(&point);
	printf("point address: %p\n", &point);
	printf("point->x : %i , point->y : %i\n", point.x, point.y);
}

void	do_test_24()
{
	char	*cmd = "./test24";
	char	*params = "";
	execlp(cmd, params);
}

void	do_test_25()
{
	int	*range = ft_range(1, 10);
	ft_foreach(range, 9, putnbr);
	free(range);
}

void	do_n_test(int n, void (*f)(void))
{
	printf("< ----------------------- ex%02i ------------------------- >\n", n);
	f();
	printf("< --------------------- finished ----------------------- >\n");
}

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	do_n_test(14, do_test_14);
	do_n_test(20, do_test_20);
	do_n_test(21, do_test_21);
	do_n_test(22, do_test_22);
	do_n_test(23, do_test_23);
	do_n_test(24, do_test_24);
	do_n_test(25, do_test_25);
	return (0);
}
