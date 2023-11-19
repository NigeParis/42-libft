/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:02:36 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/19 16:02:49 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	if (dest < src)
	{
		while (n--)
		{
			*ptr_dest++ = *ptr_src++;
		}
	}
	else
	{
		while (n)
		{
			ptr_dest[n - 1] = ptr_src[n - 1];
			n--;
		}
	}
	return ((unsigned char *)dest);
}
