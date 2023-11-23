/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <Nige@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 09:11:41 by nige42            #+#    #+#             */
/*   Updated: 2023/11/23 13:29:06 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	t_list	*ptr;
	char str[] = "Hello";

	ptr = ft_lstnew(str);

	printf("\ncontenu : %s", (char *)ptr->content);
	printf("\nnext... : %p", (char *)ptr->next);
	
	


	return (0);
}
