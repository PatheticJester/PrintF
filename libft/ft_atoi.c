/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvaughn <hvaughn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 23:57:56 by hvaughn           #+#    #+#             */
/*   Updated: 2021/11/05 23:57:56 by hvaughn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checknum(int a)
{
	if (a % 2 == 0)
	{
		return (0);
	}
	else
		return (1);
}

int	ft_atoi(const char *nptr)
{
	int	x;
	int	y;
	int	shelovesmenot;

	y = 0;
	x = 0;
	shelovesmenot = 0;
	while (nptr[y] == ' ' || (nptr[y] >= 9 && nptr[y] <= 13))
	{
		y++;
	}
	if (nptr[y] == '-')
		shelovesmenot++;
	if (nptr[y] == '+' || nptr[y] == '-')
		y++;
	while (nptr[y] >= '0' && nptr[y] <= '9')
	{
		x = x * 10 + (nptr[y] - '0');
		y++;
	}
	if (checknum(shelovesmenot) == 0)
		return (x);
	else
		return (-x);
}
