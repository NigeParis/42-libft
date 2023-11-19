/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 22:24:00 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/19 22:29:29 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
* ft_strmapi
*
* char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
*
* Description
* Applies the function ’f’ to each character of the string ’s’, and passing 
* its index as first argument to create a new string (with malloc(3)) 
* resulting from successive applications of ’f’.
*
* Parameters : s:  The string on which to iterate.
*              f:  The function to apply to each character.
*
* Return value : 
* The string created from the successive applications of ’f’.
* Returns NULL if the allocation fails.
*
* External functs. : malloc
**/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{



}
