/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:34:43 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/14 22:57:29 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
* ft_substr
*
* char *ft_substr(char const *s, unsigned int start, size_t len);
*
* Description
* Allocates (with malloc(3)) and returns a substring from the string ’s’.
* The substring begins at index ’start’ and is of maximum size ’len’.
*
* Parameters
* s:  The string from which to create the substring.
* start:  The start index of the substring in the string ’s’.
* len:  The maximum length of the substring.
*
* Return value
* The substring. NULL if the allocation fails.
* 
* External functs : malloc
**/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	char			*substr;
	unsigned int	i;

	if (!ft_strlen(s))
		return (NULL);
	i = 0;
	str = (char *)s;
	substr = calloc(len, sizeof(char));
	if (!substr)
		return (NULL);
	while (i < len)
	{
		substr[i] = str[(start + i)];
		i++;
	}
	substr[i] = '\0';
	return (&substr[0]);
}
