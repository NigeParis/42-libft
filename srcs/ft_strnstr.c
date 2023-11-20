/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:25:12 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/20 21:35:42 by nrobinso         ###   ########.fr       */
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
	char		*str;
	char		*find;
	size_t		i;
	size_t		j;

	
	str = (char *)big;
	find = (char *)little;
	if (len > ft_strlen(big))
		len = ft_strlen(big) + 1;
	i = 0;
	j = 0;
	if (!*find)
		return (&str[i]);
	while (i < len)
	{
		if (find[j] == str[i])
		{
			while ((find[j++] == str[i++]) && i <= len)
				if (find[j] == '\0')
					return (&str[i] - j);
			j = 0;
		}
		i++;
	}
	return (NULL);
}
