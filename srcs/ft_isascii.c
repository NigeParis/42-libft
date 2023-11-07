/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:12:46 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/07 12:42:12 by nrobinso         ###   ########.fr       */
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

#include "../includes/libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
