/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:35:15 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/06 15:57:39 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/** #include <string.h>
*
*  strcmp  -  int strcmp(const char *s1, const char *s2, size_t n);
*
* DESCRIPTION
* La fonction strcmp() compare les deux chaînes s1 et s2. Elle renvoie un 
* entier négatif, nul, ou positif, si s1 est respectivement inférieure, égale 
* ou supérieure à s2.
*
* strcmp() returns an integer indicating the result of the comparison, as
*
*       follows:
*
*       • 0, if the s1 and s2 are equal;
*
*       • a negative value if s1 is less than s2;
*
*       • a positive value if s1 is greater than s2.
*
*
* La fonction compare de s1 et s2.
*
* RETURN VALUE
* strcmp() function returns an integer less than, equal to, or greater than 
* zero if s1 (or the first n bytes thereof) is found, respectively, to be less 
* than, to match, or be greater than s2.
**/

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;
	char	*str1;	
	char	*str2;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	if (!str1 && !str2)
		return (0);
	if (!str1)
		return (ft_strlen(str2));
	if (!str2)
	{
		return (ft_strlen(str1));
	}
	while ((str1[i] == str2[i]) && str1[i] && str2[i])
	{
		i++;
	}
	if ((i != ft_strlen(str1)) || i != ft_strlen(str2))
		return ((unsigned char)str1[i] - (unsigned char)str2[i]);
	return (0);
}
