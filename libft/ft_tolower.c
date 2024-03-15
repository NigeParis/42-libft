/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:46:21 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/25 14:58:56 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
* #include <ctype.h>
*
* tolower  -  int tolower(int c);
*
* DESCRIPTION
* The tolower() function converts an upper-case letter to the corresponding 
* lower-case letter.  The argument must be representable as an unsigned char 
* or the value of EOF. Although the tolower() function uses the current locale
*
* RETURN VALUES
* If the argument is an upper-case letter, the tolower() function returns the 
* corresponding lower-case letter if there is one; otherwise, the argument 
* is returned unchanged.
**/

#include "libft.h"

static int	ft_isupper(int c);

int	ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + 32);
	return (c);
}

static int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
