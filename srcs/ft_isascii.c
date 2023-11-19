/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:57:04 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/19 15:57:10 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
* #include <ctype.h>
*
* isacii  -   int isascii(int c);
*
* isascii()
*	checks whether c is a 7-bit unsigned char value that  fits  into
*	the ASCII character set.
*
* RETURN VALUE
*	The  values  returned  are  nonzero  if  the character c falls into the
*	tested class, and zero if not.
*/

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
