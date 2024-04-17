/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:14:01 by nrobinso          #+#    #+#             */
/*   Updated: 2024/04/17 20:34:21 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/** #include <stdlib.h>
*
* atoi  -  long int atol(const char *str);
*
* DESCRIPTION
* The atol() function converts the initial portion of the string pointed to
* by str to int representation.
*
*
* While the atol() function uses the current locale, the atol() function 
* may be passed a locale directly. See xlocale(3) for more information.
**/

#include "libft.h"

static int	ft_isspace(int c);

long int	ft_atol(const char *str)
{
	char		*string;
	int			i;
	long int	result;
	long int	neg;

	i = 0;
	neg = 1;
	result = 0;
	string = (char *)str;
	while (ft_isspace(string[i]))
		i++;
	if ((string[i] == '-') || (string [i] == '+'))
	{
		if (string[i] == '-')
			neg = -1;
		i++;
	}
	while ((string[i]) && ft_isdigit(string[i]))
	{
		result = result + (string[i] - '0');
		i++;
		result = result * 10;
	}
	result = result / 10;
	return (result * neg);
}

static int	ft_isspace(int c)
{
	return ((c >= '\t' && c <= '\r') || (c == ' '));
}
