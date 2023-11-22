/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:06:24 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/20 12:25:53 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
* ft_striteri
*
* void ft_striteri(char *s, void (*f)(unsigned int, char*));
*
* Description
* Applies the function ’f’ on each character of the string passed as argument, 
* passing its index as first argument.
* Each character is passed by address to ’f’ to be modified if necessary.
*
* Parameters :   s:  The string on which to iterate.
*                f:  The function to apply to each character.
*
* Return value : None
*
* External functs : none
**/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	index;
	char			*ptr;

	index = 0;
	ptr = (char *)s;
	while (ptr[index])
	{
		f(index, &ptr[index]);
		index++;
	}	
	ptr[index + 1] = '\0';
}
