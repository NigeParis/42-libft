/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:25:12 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/28 09:25:17 by nrobinso         ###   ########.fr       */
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

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	size;

	i = 0;
	if (!big && len == 0)
		return (NULL);
	if (little[0] == '\0')
		return ((char *)big);
	size = ft_strlen(little);
	if (len == 1 && ft_strncmp(big, little, size) == 0)
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		if (ft_strncmp(big + i, little, size) == 0)
		{
			if (len - i < ft_strlen(little))
				return (NULL);
			return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
