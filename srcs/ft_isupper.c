/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:29:29 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/07 16:02:43 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
*
* #include <ctype.h>
*
* isupper - int isupper(int c);
*
* checks for an uppercase letter.
*
* RETURN VALUE
*   	The  values returned are nonzero 
*		if the character c falls into the tested class,
*       and zero if not.
*
**/

#include "../includes/libft.h"

int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
