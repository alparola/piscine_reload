/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alparola <alparola@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 11:47:45 by alparola          #+#    #+#             */
/*   Updated: 2024/12/20 20:29:10 by alparola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H_
#define MAIN_H_

#include "ex22/ft_abs.h"
#include "ex23/ft_point.h"

int		ft_sqrt(int nb);
char	*ft_strdup(char *src);
int		*ft_range(int min, int max);
void	ft_foreach(int *tab, int length, void (*f)(int));

#endif
