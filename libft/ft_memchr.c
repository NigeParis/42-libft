/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:37:01 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/13 16:12:31 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
* #include <string.h>
*
*	memchr  -  void *memchr(const void *s, int c, size_t n);
*
* DESCRIPTION
* The  memchr() function scans the initial n bytes of the memory area pointed 
* to by s for the first instance of c. Both c and the bytes of the memory area 
* pointed to by s are interpreted as un‐signed char.
*
* RETURN VALUE
* The memchr() and memrchr() functions return a pointer to the matching byte 
* or NULL if the character does not occur in the given memory area.
**/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char		*str;
	char		ch;
	size_t		i;

	ch = (char)c;
	str = (char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == ch)
			return ((void *)s + i);
		i++;
	}
	return ((void *) NULL);
}
