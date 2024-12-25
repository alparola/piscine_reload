/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alparola <alparola@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 12:22:06 by alparola          #+#    #+#             */
/*   Updated: 2024/12/24 07:54:13 by alparola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ret;
	int	*iret;

	ret = 0;
	if (max - min <= 0)
		return (0);
	iret = malloc(sizeof(int *) * (max - min + 1));
	if (!iret)
		return (0);
	ret = iret;
	while (min < max)
		*(ret++) = min++;
	*ret = 0;
	return (iret);
}
