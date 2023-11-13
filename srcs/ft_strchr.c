/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 22:07:24 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/13 22:09:29 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
* #include <string.h>
* strchr  -   char *strchr(const char *s, int c);
*
* DESCRIPTION
* The  strchr) function returns a pointer to the first occurrence of the 
* character c in the string s.
*
* Here "character" means "byte"; these functions do not work with wide  or  
* multibyte characters.
*
* RETURN VALUE
* The  strchr() function returns a pointer to the matched character or NULL if 
* the character is not found.  The terminating null byte is  considered  part
* of  the string, so that if c is specified as '\0', these functions 
* return a pointer to the terminator.
**/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = 0;
	if (c == '\0')
	{
		while (*str)
			str++;
		return (str);
	}
	while (str[i])
	{
		if (c == str[i])
			return (&str[i]);
		i++;
	}
	return (NULL);
}
