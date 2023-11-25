/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:48:10 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/20 17:18:39 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
* #include <string.h>
*
* strrchr  -  char *strrchr(const char *s, int c);
*
* DESCRIPTION
* The strrchr() function returns a pointer to the last occurrence of the
* character c in the string s.
*
* RETURN VALUE
* The strrchr() function returns a pointer  to  the  matched character or NULL 
* if the character is not found. The terminating null byte is considered part 
* of the string, so that if  c  is  specified  as '\0', these functions return 
* a pointer to the terminator.
**/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*str;
	int				i;
	int				found;
	unsigned char	find;

	str = (char *)s;
	find = (unsigned char)c;
	i = 0;
	found = 0;
	if (find == '\0')
	{
		while (*str)
			str++;
		return (str);
	}
	while (str[i])
	{
		if (str[i] == find)
			found = i + 1;
		i++;
	}
	if (found)
		return (&str[found - 1]);
	return (0);
}
