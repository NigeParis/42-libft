/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 09:41:56 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/12 08:54:43 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/** ft_lstsize
*
* int ft_lstsize(t_list *lst);
*
* Description: Counts the number of nodes in a list
*
* Parameters : lst: The beginning of the list.
*
* Note : while(lst) - work because lst -> next adresse exists 
*                                         (no need to increment)
**/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	if (lst == NULL)
		return (0);
	size = 0;
	while (lst)
	{
		lst = lst -> next;
		size++;
	}
	return (size);
}
