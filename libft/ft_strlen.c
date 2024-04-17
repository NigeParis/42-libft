/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:56:57 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/06 09:04:04 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**  #include <string.h>
* strlen - size_t strlen(const char *s);
*
* The strlen() function computes the length of the string s.  
* The strnlen() function attempts to compute the length of s, 
* but never scans beyond the first maxlen bytes of s.
*
* RETURN VALUES
* The strlen() function returns the number of characters that precede 
* the terminating NUL character.  The strnlen() function returns either the 
* same result as strlen() or maxlen, whichever is smaller.
**/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	if (!s)
		return (0);
	while (s && s[i])
	{
		len++;
		i++;
	}
	return (len);
}
