/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:36:46 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/24 11:38:33 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
* ft_calloc
*
* void *calloc(size_t nmemb, size_t size);
*
* DESCRIPTION
* The calloc() function allocates memory for an array of  nmemb  elements of  
* size bytes each and returns a pointer to the allocated memory.  The memory 
* is set to zero.  If nmemb or size is 0,  then  calloc()  returns either  
* NULL, or a unique pointer value that can later be successfully passed to 
* free().  If the multiplication of nmemb and size would result in  integer  
* overflow, then calloc() returns an error.  By contrast, an integer overflow 
* would not be detected in the following  call  to  malloc(),  with the result 
* that an incorrectly sized block of memory would be allocated:
*
*                           malloc(nmemb * size);
* RETURN VALUE
* The malloc() and calloc() functions return a pointer to  the  allocated
* memory,  which  is  suitably  aligned for any built-in type.  On error,
* these functions return NULL.  NULL may also be returned by a successful
* call  to  malloc() with a size of zero, or by a successful call to calloc() 
* with nmemb or size equal to zero. The free() function returns no value.
**/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	tmp;

	if (size == 0)
		return (malloc(0));
	if (count > (SIZE_MAX / size))
		return (0);
	tmp = count * size;
	ptr = malloc(tmp);
	if (!ptr)
		return (0);
	ft_bzero(ptr, (count * size));
	return (ptr);
}
