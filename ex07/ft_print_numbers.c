/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alparola <alparola@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 20:09:25 by alparola          #+#    #+#             */
/*   Updated: 2024/12/24 07:50:10 by alparola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	letter;

	letter = '0';
	while (letter <= '9')
	{
		write(1, &letter, 1);
		letter++;
	}
}
