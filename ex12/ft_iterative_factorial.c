/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alparola <alparola@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 20:46:43 by alparola          #+#    #+#             */
/*   Updated: 2024/12/24 09:53:42 by alparola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	ret;

	ret = nb;
	if (nb != 0)
	{
		if (nb < 0)
		{
			while (++nb < 0)
				ret *= nb;
		}
		else
		{
			while (--nb > 0)
				ret *= nb;
		}
	}
	return (ret);
}
