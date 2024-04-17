/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:48:22 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/12 08:56:53 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
* ft_lstadd_front
* 
* void ft_lstadd_front(t_list **lst, t_list *new);
*
* Description
* Adds the node ’new’ at the beginning of the list.
*
* Parameters
* lst: The address of a pointer to the first link of a list.
* new: The address of a pointer to the node to be added to the list.
*
* Return value: None and External functs: None
*
* How it works :
*                       new->next = *lst;
*                   	->>>   new--->link-->*lst--->link-->NULL
*                       **lst
*                     	*lst = new	*lst-->link-->old *lst
**/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}
