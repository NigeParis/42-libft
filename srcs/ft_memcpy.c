/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:06:52 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/08 20:43:08 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
* #include <string.h>
*
* memcpy  -   void *memcpy(void *dest, const void *src, size_t n);
*
* The memcpy() function copies n bytes from memory area src to memory area dest.
* The memory areas must not overlap.
*
* RETURN VALUE
* The memcpy() function returns a pointer to dest.
**/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *ptr_dest;
	char *ptr_src;
	size_t i;

	ptr_dest = (char *)dest;
	ptr_src = (char *)src;
	i = 0;
	while (i < n)
	{
		ptr_dest[i] = ptr_src[i];	
		i++;
	}
	return (dest);
}
