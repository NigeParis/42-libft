/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <Nige@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 09:11:41 by nige42            #+#    #+#             */
/*   Updated: 2023/11/25 11:38:37 by nrobinso         ###   ########.fr       */
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
void	*fun(void *ptr)
{
	char *ptr1;
	
	ptr1 = (char *)ptr;
	*ptr1 = *ptr1 + 1;

	return (ptr1);
}

int	main(void)
{
	t_list	*ptr0;
	t_list	*ptr1;
	t_list	*ptr2;
	t_list	*ptr3;
	t_list	*new_lst = NULL;
	char 	str0[] = "Hello";
	char 	str1[] = "World";
	char 	str2[] = "Again";
	char 	str3[] = "Nigel";
	int		lstsize = 0;

	ptr0 = ft_lstnew(str0);
	ptr1 = ft_lstnew(str1);
	ptr2 = ft_lstnew(str2);
	ptr3 = ft_lstnew(str3);

	ft_lstadd_front(&ptr0, ptr1);
	ft_lstadd_front(&ptr1, ptr2);
	lstsize = ft_lstsize(ptr2);

	t_list *tmp = ptr2;
	printf("\nprinting the full list...\n");
	while (tmp)
	{
		printf("\ncontenu : %s", (char *)tmp->content);
		printf("\nnext... : %p", tmp->next);
		tmp = tmp->next;
	}

	printf("\n");
	ft_lstadd_back(&ptr0, ptr3);

	lstsize = ft_lstsize(ptr2);
	printf("\nlstadd_back...`Nigel`\n");
	printf("\nsize iof list is : %d", lstsize);

	printf("\nprinting the full list...\n");
	tmp = ptr2;
	while (tmp)
	{
		printf("\ncontenu : %s", (char *)tmp->content);
		printf("\nnext... : %p", tmp->next);
		tmp = tmp->next;
	}

	tmp = ptr3;
	printf("\n\nlast....: %s", (char *)tmp -> content);
	printf("\nnext... : %p\n", tmp -> next);

	tmp = ft_lstlast(ptr0);

	printf("\nlstlast : %s", (char *)tmp -> content);
	printf("\nnext... : %p\n", tmp -> next);




	tmp = ptr1;
	while (tmp)
	{
		printf("\ncontenu : %s", (char *)tmp->content);
		printf("\nnext... : %p", tmp->next);
		tmp = tmp->next;
	}

	printf("\n");
	ft_lstiter(ptr1, &f);
	tmp = ptr1;
	while (tmp)
	{
		printf("\ncontenu : %s", (char *)tmp->content);
		printf("\nnext... : %p", tmp->next);
		tmp = tmp->next;
	}

	printf("\n");

	printf("\n ------- new list");

	new_lst = ft_lstmap(ptr1, &fun, &del);

	while (new_lst)
	{
		printf("\ncontenu : %s", (char *)new_lst->content);
		printf("\nnext... : %p", new_lst->next);
		new_lst = new_lst->next;
	}


	printf("\n");
	ft_lstdelone(ptr1, &del);

	printf("\nft_lstdelone()...\n");
	tmp = ptr0;
	while (tmp)
	{
		printf("\ncontenu : %s", (char *)tmp->content);
		printf("\nnext... : %p", tmp->next);
		tmp = tmp->next;
	}

		
	ft_lstclear(&ptr0, &del);

	printf("\n");
	printf("\nft_lstclear()...\n");

	tmp = ptr0;
	while (tmp)
	{
		printf("\ncontenu : %s", (char *)tmp->content);
		printf("\nnext... : %p", tmp->next);
		tmp = tmp->next;
	}
		


	return (0);

}
