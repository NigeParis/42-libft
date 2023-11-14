/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 09:30:01 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/14 09:59:08 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
* #include <ctype.h>
*
* isspace  -  int isspace(int c);
*
* DESCRIPTION
* The isspace() function tests for the white-space characters. For any locale, 
* this includes the following standard characters:
*  
*                     ``\t''``\n''``\v''``\f''``\r''`` ''
*
* RETURN VALUES
* The isspace() function returns zero if the character tests false and returns 
* non-zero if the character tests true.
**/

#include "libft.h"

int	ft_isspace(int c)
{
	return ((c >= '\t' && c <= '\r') || (c == ' '));
}
