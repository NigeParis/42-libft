/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:14:01 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/25 14:58:00 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
* #include <stdlib.h>
*
* atoi  -  int atoi(const char *str);
*
* DESCRIPTION
* The atoi() function converts the initial portion of the string pointed to
* by str to int representation.
*
*    It is equivalent to: (int)strtol(str, (char **)NULL, 10);
*
* While the atoi() function uses the current locale, the atoi_l() function 
* may be passed a locale directly. See xlocale(3) for more information.
**/

#include "libft.h"

static int	ft_isspace(int c);

int	ft_atoi(const char *str)
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
	return ((int)result * neg);
}

static int	ft_isspace(int c)
{
	return ((c >= '\t' && c <= '\r') || (c == ' '));
}
