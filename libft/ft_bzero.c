/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:55:05 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/19 15:55:17 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
* #include <strings.h>
*
* ft_bzero  -  void ft_bzero(void *s, size_t n);
*
* The bzero() function erases the data in the n bytes of the memory 
* starting at the location pointed to by s, 
* by writing zeros (bytes containing '\0') to that area.
*
* RETURN VALUE
*       None.
**/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
