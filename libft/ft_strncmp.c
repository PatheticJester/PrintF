/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvaughn <hvaughn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 23:57:59 by hvaughn           #+#    #+#             */
/*   Updated: 2021/11/05 23:57:59 by hvaughn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	x;
	int				diff;

	x = 0;
	diff = 0;
	while ((x < n) && !diff && (s1[x] != '\0') && (s2[x] != '\0'))
	{
		diff = (unsigned char)s1[x] - (unsigned char)s2[x];
		x++;
	}
	if (x < n && !diff && (s1[x] == '\0' || s2[x] == '\0'))
		diff = (unsigned char)s1[x] - (unsigned char)s2[x];
	return (diff);
}
