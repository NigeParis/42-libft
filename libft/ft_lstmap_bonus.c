/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 08:16:22 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/25 11:25:35 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*fun)(void *), void (*del)(void *))
{

	t_list	*newlist;
	t_list	*list;
	newlist = NULL;
	list = newlist;

	while (lst)
	{
		newlist = ft_lstnew(lst -> content);
		if (!newlist)
			ft_lstdelone(newlist, del);
		newlist -> content = fun(lst -> content);
		ft_lstadd_back(&list, newlist);
		lst = lst -> next;
	}
	return (list);
}
