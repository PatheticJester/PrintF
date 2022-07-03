/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvaughn <hvaughn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 23:57:56 by hvaughn           #+#    #+#             */
/*   Updated: 2021/11/05 23:57:56 by hvaughn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			y;
	unsigned char	*sx;

	y = 0;
	sx = (unsigned char *)s;
	while (y < n)
	{
		sx[y] = 0;
		y++;
	}
	s = sx;
}
//This note serves to explain to my idiot self how this works
//yes, That's right. I forgot basic programming within a month
//Anywas. It is prototyped to the example in man
//Y and *SX are then set and defined. Next it iterates through using
//the size defined by N. Then allows S = SX
