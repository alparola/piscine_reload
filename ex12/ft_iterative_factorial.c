/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alparola <alparola@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 20:46:43 by alparola          #+#    #+#             */
/*   Updated: 2024/12/30 17:53:36 by alparola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	ret;

	ret = 1;
	if (nb >= 0 && nb <= 12)
	{
		while (nb > 0)
		{
			ret *= nb;
			nb -= 1;
		}
		return (ret);
	}
	else
		return (0);
}
