/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:41:12 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/08 22:34:38 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
* #include <string.h>
*
* memmove  -  void *memmove(void *dest, const void *src, size_t n);
*
* DESCRIPTION
* The memmove() fun copies n bytes from memory area src to memory area dest.  
* The memory areas may overlap: copying takes place as though the bytes in src
* are first copied into a temporary array that does not overlap src or dest, 
* and the bytes are then copied from the temporary array to dest.
*
* EXAMPLE   char a[30] = "That's not what I said." - memmove( a+7, a+11, 13 ) 
*						before : That's not what I said.$
*						after  : That's what I said.$
**/

#include "libft.h"

void	*memmove(void *dest, const	void *src, size_t n)
{






}
