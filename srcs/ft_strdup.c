/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:34:39 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/14 15:55:04 by nrobinso         ###   ########.fr       */
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
	char			*str;
	char			*to_copy;
	unsigned int	size;
	int				i;

	i = 0;
	to_copy = (char *)s1;
	size = ft_strlen(s1) + 1;
	str = (char *)calloc(size, sizeof(char));
	if (!str)
		return (0);
	while (to_copy[i])
	{
		str[i] = to_copy[i];
		i++;
	}
	str[i] = '\0';
	return (&str[0]);
}
