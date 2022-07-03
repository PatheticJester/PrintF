/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvaughn <hvaughn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 23:57:58 by hvaughn           #+#    #+#             */
/*   Updated: 2021/11/05 23:57:58 by hvaughn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_chungus(size_t size)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	ft_bzero(str, size + 1);
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	x;
	size_t	y;
	size_t	s1_len;
	size_t	s2_len;

	x = -1;
	y = -1;
	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new_str = ft_chungus(s1_len + s2_len);
	if (!new_str)
		return (NULL);
	while (++x < s1_len)
		*(new_str + x) = *(s1 + x);
	while (++y < s2_len)
		*(new_str + x++) = *(s2 + y);
	return (new_str);
}
