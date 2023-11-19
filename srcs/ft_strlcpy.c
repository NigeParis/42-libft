/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:07:12 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/19 16:07:18 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
* #include <string.h>
*
* strlcpy  -  
*
* size_t
* strlcpy(char * dst, const char * src, size_t dstsize);
*
* DESCRIPTION
*     
* The strlcpy() functions copy and concatenate strings with the same input 
* parameters and output result as snprintf(). They are designed to be safer, 
* more consistent, and less error prone replacements for the easily misused 
* functions strncpy().
*
* strlcpy() takes the full size of the destination buffer and guarantee 
* NUL-termination if there is room. Note that room for the NUL should be 
* included in dstsize.  Also note that strlcpy() only operate on true ''C'' 
* strings. This means that for strlcpy() src must be NUL-terminated strlcpy() 
* copies up to dstsize - 1 characters from the string src to dst, 
* NUL-terminating the result if dstsize is not 0.
*
* It will append at most dstsize - strlen(dst) - 1 characters.  
* It will then NUL-terminate, unless dstsize is 0 or the original dst string 
* was longer than dstsize (in practice this should not happen as it means that 
* either dstsize is incorrect or that dst is not a proper string).
*
* If the src and dst strings overlap, the behavior is undefined.
*
* RETURN VALUES
*
* Besides quibbles over the return type (size_t versus int) and signal handler 
* safety (snprintf(3) is not entirely safe on some systems), 
* the following two are equivalent:
*
*           n = strlcpy(dst, src, len);
*           n = snprintf(dst, len, "%s", src);
*
* Like snprintf(3), the strlcpy() functions return the total length of 
* the string they tried to create. 
* For strlcpy() that means the length of src.  
*     
* If the return value is >= dstsize, the output string has been truncated.  
* It is the caller's responsibility to handle this.
*
* NB : check first for empty src but with dstsize > 0 - > exit dest = `\0`
*	 check dstsize < 1 - > exit with size len of src
*
**/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	char	*dest;
	char	*tocopy;
	size_t	i;

	len = 0;
	tocopy = NULL;
	len = ft_strlen(src);
	dest = dst;
	tocopy = (char *)src;
	i = 0;
	if (len == 0 && dstsize == 0)
		return (len);
	if (len == 0)
		*dest = '\0';
	if (dstsize < 1 || len < 2)
		return (len);
	while (i < dstsize - 1 && tocopy[i] != '\0')
	{
		dest[i] = tocopy[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
