/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:48:44 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/10 11:17:37 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
* #include <ctype.h>
*
* isalnum  -  int isalnum(int c);
*
* RETURN VALUE
*	The  values returned are nonzero 
*	if the character c falls into the tested class,
*	and zero if not.
**/

#include "libft.h"

int	ft_isalnum(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') \
			|| (c >= '0' && c <= '9'));
}
