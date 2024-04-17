/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:31:01 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/24 13:58:38 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
* ft_lstnew
*
* t_list *ft_lstnew(void *content);
*
* Description
* Allocates (with malloc(3)) and returns a new node. The member variable 
* ’content’ is initialized with the value of the parameter ’content’. 
* The variable 'next’ is initialized to NULL.
*
* Parameters : content: The content to create the node with.
*
* Return value : The new node
*
* External functs : malloc
*
* typedef struct s_list  
* {
*	void			*content;
*   struct s_list	*next;
* }	t_list;
**/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	ptr = ft_calloc(1, sizeof(t_list));
	if (!ptr)
		return (NULL);
	ptr -> content = content;
	ptr -> next = NULL;
	return (ptr);
}
