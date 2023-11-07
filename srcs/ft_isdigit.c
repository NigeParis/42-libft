/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:36:48 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/07 15:16:29 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
*   #include <ctype.h>
* 	isdigit - int isdigit(int c);
*
* 	RETURN VALUE
*		The  values returned are nonzero 
*		if the character c falls into the tested class,
*		and zero if not.
**/

#include "../includes/libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (2048);
	return (0);
}
