/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:37:29 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/15 14:51:17 by nrobinso         ###   ########.fr       */
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
	while (set[i])
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

	i = 0;
	start = 0;
	str = (char *)s1;
	find = (char *)set;
	stop = ft_strlen(str);
	newstr = (char *)ft_calloc(stop + 1, sizeof(char));
	ft_memset(newstr, '.', stop);

	while (str[start])
	{
		if(ft_isfound(str[start], find))
		{
			start++;
		}
		else
			break ;
	}

	ft_putnbr_fd(start, 1);
	
	str = &str[stop];
	ft_putnbr_fd(stop, 1);
	while (ft_isfound(*str, find))
	{
		str--;
		stop--;
	}

	ft_putnbr_fd(stop, 1);

	while (start < stop)
	{
		newstr[i] = str[start];
		start++;
		i++;

	}

	newstr[i - 1] = 'H';
	newstr[i] = '\0';

	return (newstr);	
}










