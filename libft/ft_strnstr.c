/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvaughn <hvaughn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 23:57:59 by hvaughn           #+#    #+#             */
/*   Updated: 2021/11/05 23:57:59 by hvaughn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		x;
	size_t		y;
	size_t		z;
	int			found;

	x = -1;
	found = 1;
	if (!ft_strlen(needle))
		return ((char *)haystack);
	while (*(haystack + ++x) && x < len)
	{
		y = 0;
		if (*(haystack + x) == *(needle + 0))
		{
			z = x;
			found = 1;
			while (*(haystack + z) && *(needle + y) && y < len && z < len)
				if (*(haystack + z++) != *(needle + y++))
					found = 0;
			if (found && !*(needle + y))
				return ((char *)haystack + x);
		}
	}
	return (NULL);
}
