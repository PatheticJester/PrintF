/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvaughn <hvaughn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 23:57:57 by hvaughn           #+#    #+#             */
/*   Updated: 2021/11/05 23:57:57 by hvaughn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*next_elem;

	if (!lst || !f)
		return (NULL);
	next_elem = ft_lstnew((*f)(lst->content));
	if (!next_elem)
		return (NULL);
	list = next_elem;
	lst = lst->next;
	while (lst)
	{
		next_elem = ft_lstnew((*f)(lst->content));
		if (!next_elem)
		{
			ft_lstclear(&list, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&list, next_elem);
	}
	return (list);
}
