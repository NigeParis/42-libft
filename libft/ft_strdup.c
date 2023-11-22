/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:34:39 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/22 10:34:01 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
* #include <string.h>
*
* strdup  -  char *strdup(const char *s1);
*
* DESCRIPTION
* The strdup() function allocates sufficient memory for a copy of the 
* string s1, does the copy, and returns a pointer to it. The pointer may
* subsequently be used as an argument to the function free(3).
*
* If insufficient memory is available, NULL is returned and errno 
* is set to ENOMEM.
**/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	char	*to_copy;
	size_t	size;

	to_copy = (char *)s1;
	size = ft_strlen(s1);
	str = (char *)ft_calloc(size + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, to_copy, size + 1);
	return (str);
}
