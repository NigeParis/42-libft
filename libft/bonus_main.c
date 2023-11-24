/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <Nige@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 09:11:41 by nige42            #+#    #+#             */
/*   Updated: 2023/11/24 23:06:56 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	del(void *ptr)
{
	char  *ptr1;

	ptr1 = (char *)ptr;

	*ptr1 = '\0';
}

void	f(void *ptr)
{
	char *ptr1;
	
	ptr1 = (char *)ptr;
	*ptr1 = *ptr1 + 1;

}


int	main(void)
{
	t_list	*ptr0;
	t_list	*ptr1;
	t_list	*ptr2;
	t_list	*ptr3;
	char 	str0[] = "Hello";
	char 	str1[] = "World";
	char 	str2[] = "Again";
	char 	str3[] = "Nigel";
	int		lstsize = 0;

	ptr0 = ft_lstnew(str0);
	ptr1 = ft_lstnew(str1);
	ptr2 = ft_lstnew(str2);
	ptr3 = ft_lstnew(str3);

/*	printf("\ncontenu : %s", (char *)ptr->content);
	printf("\nnext... : %p", (char *)ptr->next);
	printf("\ncontenu : %s", (char *)new->content);
	printf("\nnext... : %p", (char *)new->next);
*/	
	ft_lstadd_front(&ptr0, ptr1);
	ft_lstadd_front(&ptr1, ptr2);
	lstsize = ft_lstsize(ptr1);

	t_list *tmp = ptr2;

	ft_lstadd_back(&ptr0, ptr3);

	printf("\nsize is : %d", lstsize);
	printf("\nprinting the full list...\n");
	while (tmp)
	{
		printf("\ncontenu : %s", (char *)tmp->content);
		printf("\nnext... : %p", tmp->next);
		tmp = tmp->next;
	}

	tmp = ptr3;
	printf("\n\nlast....: %s", (char *)(tmp - ft_lstsize(ptr0)) -> content);
	printf("\nnext... : %p\n", tmp -> next);

	printf("\nlstlast : %s", (char *)tmp -> content);
	printf("\nnext... : %p\n", tmp -> next);



	ft_lstclear(&ptr3, &del);

	tmp = ptr1;
	while (tmp)
	{
		printf("\ncontenu : %s", (char *)tmp->content);
		printf("\nnext... : %p", tmp->next);
		tmp = tmp->next;
	}


	ft_lstiter(ptr1, &f);
	tmp = ptr1;
	while (tmp)
	{
		printf("\ncontenu : %s", (char *)tmp->content);
		printf("\nnext... : %p", tmp->next);
		tmp = tmp->next;
	}

	ft_lstclear(&ptr3, &del);


	return (0);

}
