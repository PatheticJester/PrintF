/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvaughn <hvaughn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 23:57:59 by hvaughn           #+#    #+#             */
/*   Updated: 2021/11/05 23:57:59 by hvaughn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	x;

	x = (int)ft_strlen(s) + 1;
	while (x--)
	{
		if (*(s + x) == (char)c)
			return ((char *)s + x);
	}
	return (NULL);
}
