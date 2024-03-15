/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 22:47:17 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/10 11:06:30 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
* #include <string.h>
*
* memset  -   void *memset(void *b, int c, size_t len);
*
* The memset() function writes len bytes of value c 
* (converted to an unsigned char) to the string b.
* important char *ptr needs to be used instead of void *b
* *b needs to be casted ptr = (char *)b 
* I pass the adddress of 'b' to pointer ptr with the cast (char *)
* RETURN VALUES
*     The memset() function returns its first argument.
**/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*ptr;
	size_t	i;

	ptr = (char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
