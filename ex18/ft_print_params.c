/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alparola <alparola@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:17:51 by alparola          #+#    #+#             */
/*   Updated: 2024/12/30 18:18:26 by alparola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(int p, char **ps)
{
	int	r;
	int	c;

	r = 1;
	while (p > r)
	{
		c = 0;
		while (ps[r][c])
		{
			ft_putchar(ps[r][c]);
			c++;
		}
		ft_putchar('\n');
		r++;
	}
	return (0);
}
