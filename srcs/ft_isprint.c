/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:52:23 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/07 21:49:31 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
* #include <ctype.h>
*
* isprint - int isprint(int c);
*
* isprint()
*	checks for any printable character including space.
*
* RETURN VALUE
*	The  values  returned  are  nonzero
*	if  the character c falls into the tested class, and zero if not.
**/

#include "../includes/libft.h"

int ft_isprint(int c)
{
	return ( c > 31 && c < 127 );
}
