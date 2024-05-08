/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unint_to_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:45:57 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/24 21:32:35 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
*	int ft_unint_to_int(unsigned int )
*
*	Converts an unsigned int to int
*	RETURNS : int
*
*   example : 0 -> -21474893648
*			: 4294967295 -> 21474893647 int max
* 
**/

#include "libft.h"

int	ft_unint_to_int(unsigned int nbr)
{
	int	result;

	if (nbr < 2147483648)
		result = (2147483648 - nbr) * -1;
	else
	result = nbr - 1 - 2147483647;
	return (result);
}
