/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test24.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alparola <alparola@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 17:09:13 by alparola          #+#    #+#             */
/*   Updated: 2024/12/20 20:24:57 by alparola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ex24/includes/libft.h"
#include <stdio.h>

int main()
{
	printf("Test ex24 >>>>\n");
	ft_putstr("Test ft_putchar 'r': ");
	ft_putchar('r');
	ft_putstr("\n");
	ft_putstr("Test ft_putstr 'Hola Mundo': ");
	ft_putstr("Hola Mundo\n");
	printf("Test ft_strlen '123456789' len = %li\n", ft_strlen("123456789"));
	printf("Test ft_strcmp '1234' - '121d': %i\n", ft_strcmp("1234", "121d"));
	int a = 42;
	int b = 24;
	printf("Test ft_swap a = %i b = %i\n", a, b);
	ft_swap(&a, &b);
       	printf("result: a = %i b = %i\n", a, b);
	printf("< ----------\n");
	return (0);
}
