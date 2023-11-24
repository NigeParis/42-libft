/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:44:35 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/24 23:31:19 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
* ft_lstadd_back
*
* void ft_lstadd_back(t_list **lst, t_list *new);
*
* Description : Adds the node ’new’ at the end of the list.
*
* Parameters
*         lst: The address of a pointer to the first link of a list.
*         new: The address of a pointer to the node to be added to the list.
*
*  Note : tmp pointer makes a copy of the adress of the last node and adds 
*  the address of the new node *new> (tmp = &lst(last) and tmp->next == &new.) 
**/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmp = ft_lstlast(*lst);
	tmp -> next = new;
}
