/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:51:50 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/12 16:44:04 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
* ft_lstdelone
*
* void ft_lstdelone(t_list *lst, void (*del)(void));
*
* Description: 
* Takes as a parameter a node and frees the memory of the node’s content using
* the function ’del’ given as a parameter and free the node. 
* The memory of ’next’ must not be freed. 
*
* Parameters: lst: The node to free.
*             del: The address of the function used to delete the content.
*
* External functs: free
**/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del (lst -> content);
 //	free(lst);
	lst = NULL;
}
