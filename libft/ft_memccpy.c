/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:04:24 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/15 08:40:35 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
* #include <string.h>
*
* memccpy  - 
*
* void *
*    memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
*
* DESCRIPTION
* The memccpy() function copies bytes from string src to string dst. If
* the character c (as converted to an unsigned char) occurs in the string
* src, the copy stops and a pointer to the byte after the copy of c in the
* string dst is returned.  
* Otherwise, n bytes are copied, and a NULL pointer is returned.
*
* The source and destination strings should not overlap, as the behavior 
* is undefined.
**/

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char				*str;
	char				*dest;
	unsigned int		i;
	unsigned int		end;

	i = 0;
	str = (char *)src;
	dest = (char *)dst;
	end = (int)n - 1;
	while (i <= end)
	{
		dest[i] = str[i];
		if (str[i] == c)
		{
			return (&dest[i + 1]);
		}
		i++;
	}
	return (0);
}
