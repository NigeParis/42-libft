/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   correct.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:25:12 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/21 07:36:06 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
* #include <string.h>
*
* char * strnstr(const char *big, const char *little, size_t len);
*
* DESCRIPTION
* The strnstr() function locates the first occurrence of the null-terminated 
* string little in the string big, where not more than len characters are 
* searched. Characters that appear after a ‘\0’ character are not searched.  
* Since the strnstr() function is a FreeBSD specific API, 
* it should only be used when portability is not a concern.
*
* RETURN VALUES
* If little is an empty string, big is returned; 
* if little occurs nowhere in big, NULL is returned; 
* otherwise a pointer to the first character of the first occurrence of little 
* is returned.
**/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t h;
	size_t n;

	h = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[h] != '\0')
	{
		n = 0;
		while (haystack[h + n] == needle[n] && (h + n) < len)
		{
			if (haystack[h + n] == '\0' && needle[n] == '\0')
				return ((char *)&haystack[h]);
			n++;
		}
		if (needle[n] == '\0')
			return ((char *)haystack + h);
		h++;
	}
	return (0);
}
