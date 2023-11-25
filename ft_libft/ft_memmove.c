/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:02:36 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/22 10:32:24 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
* memmove  -  #include <string.h>
*
* void *memmove(void *dest, const void *src, size_t n);
*
* DESCRIPTION
* The memmove() function copies n bytes from memory area src to memory area 
* dest. The memory areas may overlap: copying takes place as though the bytes 
* in src  are first  copied  into  a temporary array that does not overlap src 
* or dest, and the bytes are then copied from the temporary array to dest.
*
* RETURN VALUE
* The memmove() function returns a pointer to dest.
**/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	if (!dest && !src)
		return (dest);
	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	if (dest < src)
	{
		while (n--)
		{
			*ptr_dest++ = *ptr_src++;
		}
	}
	else
	{
		while (n)
		{
			ptr_dest[n - 1] = ptr_src[n - 1];
			n--;
		}
	}
	return ((unsigned char *)dest);
}
