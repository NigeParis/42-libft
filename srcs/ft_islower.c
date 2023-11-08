/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:45:03 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/08 09:42:49 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
* #include <ctype.h>
*
* islower() -  int islower(int c);
*              checks for a lowercase character.
* RETURN VALUE
*       The  values returned are nonzero if the character 
*		c falls into the tested class,
*       and zero if not.
**/

#include "libft.h"

int	ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (512);
	return (0);
}
