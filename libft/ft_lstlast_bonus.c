/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:16:35 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/24 23:28:48 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
* ft_lstlast
*
* t_list *ft_lstlast(t_list *lst);
*
* Description: Returns the last node of the list.
*
* Parameters: lst: The beginning of the list.
*
* Return value: Last node of the list
*
**/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (0);
	while (lst -> next)
	{
		lst = lst -> next;
	}
	return (lst);
}
