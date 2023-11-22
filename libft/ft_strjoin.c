/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 08:28:03 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/22 18:03:58 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
* ft_strjoin  -  char *ft_strjoin(char const *s1, char const *s2);
*
* Description
* Allocates (with malloc(3)) and returns a new string, which is the result 
* of the concatenation of ’s1’ and ’s2’
* 
* Parameters
* s1: The prefix string.
* s2: The suffix string.
* 
* Return value : The new string.  NULL if the allocation fails.
*
* External functs : malloc
**/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	index;
	size_t	len;

	index = 0;
	len = 0;
	if (!s1 || !s2)
		return (NULL);
	len = (ft_strlen(s1) + ft_strlen(s2) + 1);
	result = (char *)ft_calloc(len, sizeof(char));
	if (!result)
		return (NULL);
	len = 0;
	while (s1[index] != '\0')
	{
		result[index] = s1[index];
		index++;
	}
	while (s2[len] != '\0')
		result[index++] = s2[len++];
	result[index] = '\0';
	return (result);
}
