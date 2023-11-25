/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:02:04 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/22 17:09:26 by nrobinso         ###   ########.fr       */
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
	char	*ptr_dest;
	char	*ptr_src;
	size_t	i;

	if (dest == src)
		return (dest);
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
