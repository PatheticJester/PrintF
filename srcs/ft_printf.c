/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvaughn <hvaughn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 23:58:26 by hvaughn           #+#    #+#             */
/*   Updated: 2021/11/05 23:58:26 by hvaughn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../headers/ft_printf.h"

static t_options	*start(void)
{
	t_options	*arg_count;

	arg_count = (t_options *)malloc(sizeof(t_options));
	if (arg_count == NULL)
		return (NULL);
	arg_count->counter = 0;
	return (arg_count);
}

void	check(const char character, t_options *arg_count)
{
	char	*strrr;

	strrr = "cspiduxX";
	if (character == strrr[0])
		ifcharacter(arg_count);
	else if (character == strrr[1])
		ifstring(arg_count);
	else if (character == strrr[2])
		ifpointer(arg_count);
	else if (character == strrr[3] || character == strrr[4])
		ifint(arg_count);
	else if (character == strrr[5])
		ifunsignedint(arg_count);
	else if (character == strrr[6] || character == strrr[7])
		ifhex(arg_count, character);
	else if (character == strrr[8])
	{
		ft_putchar_fd('%', 1);
		arg_count->counter++;
	}
	else if (character != '\0')
	{
		write(1, &character, 1);
		arg_count->counter++;
	}
}

int	ft_printf(const char *string, ...)
{
	t_options	*arg_count;
	int			finish;
	int			x;

	x = 0;
	arg_count = start();
	finish = 0;
	va_start(arg_count->args, string);
	while (string[x] != '\0')
	{
		if (string[x] == '%')
			check(string[++x], arg_count);
		else
		{
			ft_putchar_fd(string[x], 1);
			arg_count->counter++;
		}
		x++;
	}
	finish = arg_count->counter;
	va_end(arg_count->args);
	free(arg_count);
	return (finish);
}
