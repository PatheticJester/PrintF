/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvaughn <hvaughn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 23:57:57 by hvaughn           #+#    #+#             */
/*   Updated: 2021/11/05 23:57:57 by hvaughn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*x1;
	const unsigned char		*x2;

	if (s1 == s2 || n == 0)
		return (0);
	x1 = (const unsigned char *)s1;
	x2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*x1 != *x2)
			return (*x1 - *x2);
		if (n > 0)
		{
			x1++;
			x2++;
		}
	}
	return (0);
}
