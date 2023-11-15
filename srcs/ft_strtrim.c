/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:37:29 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/15 18:20:14 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
* ft_strtrim  -  char *ft_strtrim(char const *s1, char const *set);
* 
* Description
* Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters 
* specified in ’set’ removed from the beginning and the end of the string.
*
* Parameters : s1: The string to be trimmed.
*             set: The reference set of characters to trim.
*
* Return value : The trimmed string. NULL if the allocation fails.
*
* External functs : malloc
**/

#include "libft.h"

static int ft_isfound(char c, char *set)
{
	int i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}




char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	char	*find;
	char	*newstr;
	size_t	start;
	size_t	stop;
	size_t	i;
	size_t	j;

	i = 0;
	start = 0;
	str = (char *)s1;
	find = (char *)set;
	stop = ft_strlen(str);
	newstr = (char *)ft_calloc(stop + 1, sizeof(char));
	while (ft_isfound(str[start], find))
		start++;
	j = start;
	while (ft_isfound(*(str + (stop - j)), find))
		j++;
	stop-= j;
	while (start < stop)
	{
		newstr[i] = str[start];
		start++;
		i++;

	}
	newstr[i] = '\0';

	return (newstr);	
}










