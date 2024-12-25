/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alparola <alparola@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:17:51 by alparola          #+#    #+#             */
/*   Updated: 2024/12/24 10:01:14 by alparola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int p, char **ps)
{
	int		i;
	char	c;

	i = 1;
	c = '\n';
	if (p > 1)
	{
		while (i < p)
		{
			while (*ps[i] != 0)
			{
				write(1, ps[i]++, 1);
			}
			write(1, &c, 1);
			i++;
		}
	}
	return (0);
}
