/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:56:26 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/19 15:56:32 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
*    #include <ctype.h>
*
*    isalpha  -  int isalpha(int c);
*
*	 RETURN VALUE
*       The  values returned are nonzero 
* 		if the character c falls into the tested class,
*       and zero if not.
**/

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
