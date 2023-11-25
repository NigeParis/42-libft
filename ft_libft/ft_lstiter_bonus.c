/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 22:20:56 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/24 23:23:08 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
* ft_lstiter
*
* void ft_lstiter(t_list *lst, void (*f)(void *));
*
* Description
* Iterates the list ’lst’ and applies the function ’f’ on the content 
* of each node.
*
* Parameters
*            lst:  The address of a pointer to a node.
*              f:  The address of the function used to iterate on the list.
**/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst -> content);
		lst = lst -> next;
	}
}
