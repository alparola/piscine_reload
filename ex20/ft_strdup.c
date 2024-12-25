/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alparola <alparola@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:58:39 by alparola          #+#    #+#             */
/*   Updated: 2024/12/24 07:52:56 by alparola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <fcntl.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*ret;
	char	*iret;

	ret = src;
	while (*ret != 0)
		ret++;
	ret = malloc(sizeof(char *) * (ret - src + 1));
	if (!ret)
		return (0);
	iret = ret;
	while (*src != 0)
	{
		*ret = *src;
		ret++;
		src++;
	}
	*ret = 0;
	return (iret);
}
