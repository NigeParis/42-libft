/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:37:29 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/16 13:51:55 by nrobinso         ###   ########.fr       */
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

static int	ft_isfound(char c, char const *set)
{
	int	i;

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
	char	*newstr;
	size_t	start;
	size_t	stop;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	start = 0;
	stop = ft_strlen(s1);
	newstr = (char *)ft_calloc((ft_strlen(s1) + 1), sizeof(char));
	while (ft_isfound(s1[start], set))
		start++;
	while (ft_isfound(s1[stop - j - 1], set))
		j++;
	while (start < stop - j)
	{
		newstr[i] = s1[start];
		i++;
		start++;
	}
	newstr[i] = '\0';
	return (newstr);
}