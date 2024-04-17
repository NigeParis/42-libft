/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 08:16:22 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/12 08:54:58 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/** ft_lstmap
*
* t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
*
* Description
* Iterates the list ’lst’ and applies the function ’f’ on the content of 
* each node.  Creates a new list resulting of the successive applications of
* the function ’f’.  The ’del’ function is used to delete the content of a 
* node if needed.
*
* Parameters
*              lst:  The address of a pointer to a node. 
*                f:  The address of the function used to iterate on the list.
*              del:  The address of the function used to delete 
*                   the content of a node if needed.
*
* Return value  The new list.
*               NULL if the allocation fails.
*
* External functs  - malloc, free
**/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*list;

	newlist = NULL;
	list = newlist;
	while (lst)
	{
		newlist = ft_lstnew(lst -> content);
		if (!newlist || !del || !f)
		{
			ft_lstdelone(newlist, del);
			return (NULL);
		}
		newlist -> content = f(lst -> content);
		ft_lstadd_back(&list, newlist);
		lst = lst -> next;
	}
	return (list);
}
