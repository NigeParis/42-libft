/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:34:43 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/29 14:58:02 by nrobinso         ###   ########.fr       */
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
	char	*substr;
	size_t	i;
	size_t	j;
	size_t	strsize;

	i = 0;
	j = start;
	if (!s)
		return (NULL);
	strsize = ft_strlen(s);
	if (start > strsize)
		return (ft_strdup(""));
	if (len > strsize)
		len = strsize;
	if (strsize < (start + len))
		len = strsize - start;
	substr = ft_calloc((len + 1), sizeof(char));
	if (!substr)
		return (NULL);
	while ((i < len) && (i < strsize))
		substr[i++] = s[j++];
	substr[i] = '\0';
	return (substr);
}
