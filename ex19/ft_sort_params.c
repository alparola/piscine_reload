/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alparola <alparola@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 18:41:43 by alparola          #+#    #+#             */
/*   Updated: 2024/12/24 10:02:20 by alparola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != 0)
		write(1, str++, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != 0 && *s2 != 0 && *s1 == *s2)
	{
		s1++;
		s2++;
		if (*s1 == 0 && *s2 > 0)
			return (*s2);
		if (*s2 == 0 && *s1 > 0)
			return (-*s1);
	}
	return (*s2 - *s1);
}

void	ft_recursive_sort(int c, char **ps)
{
	char	*tmp;
	int		i;

	i = c;
	while (i > 1)
	{
		tmp = ps[i];
		if (ft_strcmp(ps[i - 1], ps[i]) < 0)
		{
			ps[i] = ps[i - 1];
			ps[i - 1] = tmp;
			i = c + 1;
		}
		i--;
	}
}

int	main(int p, char **ps)
{
	int		i;
	char	*t;

	i = p - 1;
	ft_recursive_sort(i, ps);
	i = 1;
	while (i < p)
	{
		ft_putstr(ps[i]);
		ft_putstr("\n");
		i++;
	}
	return (0);
}
