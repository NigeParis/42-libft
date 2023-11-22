/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:01:10 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/19 16:01:16 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
* #include <ctype.h>
*
* toupper  -  int  toupper(int c);
*
* DESCRIPTION
* The toupper() function converts a lower-case letter to the corresponding 
* upper-case letter. The argument must be representable as an unsigned char 
* or the value of EOF. Although the toupper() function uses the current locale. 
*
* RETURN VALUES
* If the argument is a lower-case letter, the toupper() function returns 
* the corresponding upper-case letter if there is one; otherwise, the argument 
* is returned unchanged.
**/

#include "libft.h"

int	ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - 32);
	return (c);
}
