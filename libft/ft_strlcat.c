/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvaughn <hvaughn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 23:57:58 by hvaughn           #+#    #+#             */
/*   Updated: 2021/11/05 23:57:58 by hvaughn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	unsigned int	y;
	unsigned int	d;

	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	y = ft_strlen(dst);
	d = 0;
	while (src[d] != '\0' && y + 1 < size)
	{
		dst[y] = src[d];
		y++;
		d++;
	}
	dst[y] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[d]));
}
