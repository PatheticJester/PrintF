/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvaughn <hvaughn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 23:57:56 by hvaughn           #+#    #+#             */
/*   Updated: 2021/11/05 23:57:56 by hvaughn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*dst;

	total = size * count;
	dst = malloc(total);
	if (dst == NULL)
		return (0);
	ft_memset(dst, 0, total);
	return (dst);
}
