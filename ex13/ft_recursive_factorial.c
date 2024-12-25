/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alparola <alparola@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 16:29:39 by alparola          #+#    #+#             */
/*   Updated: 2024/12/18 16:38:38 by alparola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	ret;

	if (nb == 0)
		return (0);
	if (nb == -1 || nb == 1)
		return (nb);
	if (nb > 0)
		return (nb * ft_recursive_factorial(nb - 1));
	return (nb * ft_recursive_factorial(nb + 1));
}
