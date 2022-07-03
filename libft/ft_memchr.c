/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvaughn <hvaughn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 23:57:57 by hvaughn           #+#    #+#             */
/*   Updated: 2021/11/05 23:57:57 by hvaughn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*y;
	size_t		x;

	y = (const char *)s;
	x = -1;
	while (++x < n)
		if (*(y + x) == (char)c)
			return ((void *)y + x);
	return (NULL);
}
//Const allows for cast typing. It means the value will be constant - How apt
