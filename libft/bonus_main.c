/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <Nige@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 09:11:41 by nige42            #+#    #+#             */
/*   Updated: 2023/11/24 07:47:47 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	t_list	*ptr;
	t_list	*new;
	char str[] = "Hello";
	char str1[] = "World";

	ptr = ft_lstnew(str);
	new = ft_lstnew(str1);

/*	printf("\ncontenu : %s", (char *)ptr->content);
	printf("\nnext... : %p", (char *)ptr->next);
	printf("\ncontenu : %s", (char *)new->content);
	printf("\nnext... : %p", (char *)new->next);
*/	
	ft_lstadd_front(&ptr, new);

	t_list *tmp = ptr;
	printf("\nprinting the full list...\n");
	while (tmp)
	{
		printf("\ncontenu : %s", (char *)tmp->content);
		printf("\nnext... : %p", tmp->next);
		tmp = tmp->next;
	}
	return (0);
}
