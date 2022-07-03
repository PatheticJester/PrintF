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

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft.h"

typedef struct s_options
{
	va_list	args;
	int		counter;
}	t_options;

void	ifcharacter(t_options *arg_count);
void	ifstring(t_options *arg_count);
void	ifpointer(t_options *arg_count);
void	ifhex(t_options *arg_count, char character);
void	ifint(t_options *arg_count);
void	ifunsignedint(t_options *arg_count);
int		ft_printf(const char *string, ...);

#endif
