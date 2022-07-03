/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvaughn <hvaughn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 23:57:58 by hvaughn           #+#    #+#             */
/*   Updated: 2021/11/05 23:57:58 by hvaughn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	i_must_scream(char const *str, char c)
{
	int	count;
	int	x;

	x = 0;
	count = 0;
	while (str[x])
	{
		while (str[x] == c)
			x++;
		if (str[x] != c && str[x] != '\0')
			count++;
		while (str[x] != c && str[x] != '\0')
			x++;
	}
	return (count);
}

static char	*ft_chungus(size_t size)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	ft_bzero(str, size + 1);
	return (str);
}

static int	itsoneamandiwanttodie(char const *str, char c)
{
	int	x;
	int	len;

	x = 0;
	len = 0;
	while (str[x] == c)
		x++;
	while (str[x] != c && str[x] != '\0')
	{
		x++;
		len++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	int		x;
	int		y;
	int		z;
	char	**str2;

	str2 = (char **)malloc(sizeof(*str2) * (i_must_scream(s, c) + 1));
	if (!s || str2 == NULL)
		return (NULL);
	x = -1;
	y = 0;
	while (++x < i_must_scream(s, c))
	{
		z = 0;
		str2[x] = ft_chungus(itsoneamandiwanttodie(&s[y], c) + 1);
		if (str2 == NULL)
			str2[x] = NULL;
		while (s[y] == c)
			y++;
		while (s[y] != c && s[y])
			str2[x][z++] = s[y++];
		str2[x][z] = '\0';
	}
	str2[x] = 0;
	return (str2);
}
