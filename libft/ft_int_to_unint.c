/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_to_unint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:33:27 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/24 18:08:55 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
*	unsigned int ft_int_unint(int);
*
*	Converts an int to unsigned int
*	RETURNS : unsigned int
*
*   example : -21474893648 -> 0
*			:  21474893647 -> 4294967295 unsigned int max
* 
**/

#include "libft.h"

unsigned int	ft_int_to_unint(int nbr)
{
	unsigned int	result;

	if (nbr < 0)
		result = 2147483648 + nbr;
	else
		result = 2147483647 + nbr + 1;
	return (result);
}
