/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:58:17 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/19 15:58:23 by nrobinso         ###   ########.fr       */
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
