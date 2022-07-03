/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvaughn <hvaughn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 23:57:58 by hvaughn           #+#    #+#             */
/*   Updated: 2021/11/05 23:57:58 by hvaughn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_pleaseendmylife(char *dst, const char *src, size_t len)
{
	size_t	x;

	x = -1;
	while (++x < len)
	{
		if (*(src + x))
			*(dst + x) = *(src + x);
		else
			while (x < len)
				*(dst + x++) = '\0';
	}
	return (dst);
}
//This assclown ^ creates the duplicate string. 
//Do you know how many times I tried to get
//the right type casting on HTIS IREUJFYBTGQWEPTRJIUOQERIOHQAE3IOGFSREIOVFDSRI

static char	*ft_pleasepullthetrigger(size_t size)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	ft_bzero(str, size + 1);
	return (str);
}
//This bullshit allocates the memory. Why does it call bzero? Idfk. Hold on
//Ok. So it's freeing it.

static char	*ft_killme(const char *s1, size_t n)
{
	char	*imatempjustlikelife;

	imatempjustlikelife = ft_pleasepullthetrigger(n);
	if (imatempjustlikelife == NULL)
		return (NULL);
	ft_pleaseendmylife(imatempjustlikelife, s1, n);
	return (imatempjustlikelife);
}

char	*ft_strdup(const char *s1)
{
	return (ft_killme(s1, ft_strlen(s1)));
}
//This took me 30 minutes to write and about 5 hours to understand
//if you are doing my eval and you ask me to explain this bullshit
//and I have a PTSD flashback because I basically got
//DEEP VEIN THROMBOSIS to write this goddamn ass code... I'm sorry <3
