/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:15:20 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/12 16:33:38 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
* #include <string.h>
*
* strlcat
*
* size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
*
* DESCRIPTION
*
* The strlcat() copy and concatenate strings with the same input parameters 
* and output result as snprintf(3).  They are designed to be safer, 
* more consistent, and less error prone replacements for the easily misused 
* functions strncat(3). strlcat() take the full size of the destination buffer 
* and guarantee NUL- termination if there is room.  Note that room for the 
* NUL should be included in dstsize. strlcat() appends string src to the end 
* of dst.  It will append at most dstsize - strlen(dst) - 1 characters.  
* It will then NUL-terminate, unless dstsize is 0 or the original dst string was
* longer than dstsize (in practice this should not happen as it means that 
* either dstsize is incorrect or that dst is not a proper string).
*
* If the src and dst strings overlap, the behavior is undefined.
*
* RETURN VALUES
*     
* Besides quibbles over the return type (size_t versus int) and signal handler 
* safety snprintf(3) is not entirely safe on some systems), the following 
* two are equivalent:
*
*           n = strlcpy(dst, src, len);
*           n = snprintf(dst, len, "%s", src);
*
* Like snprintf(3), the strlcpy() and strlcat() functions return the total 
* length of the string they tried to create.  For strlcpy() that means the 
* length of src.  For strlcat() that means the initial length of dst plus the 
* length of src. If the return value is >= dstsize, the output string has *been 
* truncated.  It is the caller's responsibility to handle this.
**/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	index;
	size_t	count;
	size_t	size_of_src;

	index = 0;
	count = 0;
	size_of_src = ft_strlen(src);
	if (!dstsize)
		return (size_of_src);
	while (dst[index] && index < dstsize)
	{
		index++;
	}
	count = index;
	while ((src[index - count]) && (index < dstsize - 1))
	{
		dst[index] = src[index - count];
		index++;
	}
	if (count < dstsize)
	{
		dst[index] = '\0';
	}
	return (count + size_of_src);
}
