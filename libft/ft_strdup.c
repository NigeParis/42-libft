/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:34:39 by nrobinso          #+#    #+#             */
/*   Updated: 2024/05/08 19:12:45 by nrobinso         ###   ########.fr       */
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
	int		i;

	i = 0;
	if (!s1 || !s1[0])
		return (NULL);
	str = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = 0;
	return (str);
}
