/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvaughn <hvaughn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 23:57:58 by hvaughn           #+#    #+#             */
/*   Updated: 2021/11/05 23:57:58 by hvaughn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wheredatlength(char *str)
{
	int	y;

	y = 0;
	while (str[y] != '\0')
	{
		y++;
	}
	return (y);
}

size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	unsigned int	x;

	x = 0;
	if (size <= 0)
	{
		return (ft_wheredatlength(src));
	}
	while (src[x] != '\0' && x != (size - 1))
	{
		dst[x] = src[x];
		x++;
	}
	dst[x] = '\0';
	return (ft_wheredatlength(src));
}
