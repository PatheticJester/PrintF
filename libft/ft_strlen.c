/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvaughn <hvaughn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 23:57:58 by hvaughn           #+#    #+#             */
/*   Updated: 2021/11/05 23:57:58 by hvaughn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
		l++;
	return (l);
}
