/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:57:08 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/19 21:40:35 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
* ft_itoa  -  char *ft_itoa(int n);
*
* Description
* Allocates (with malloc(3)) and returns a string representing the integer 
* received as an argument. Negative numbers must be handled.
*
* Parameters : n:  the integer to convert.
*
* Return value : The string representing the integer.
*                NULL if the allocation fails.
**/

#include "libft.h"

static size_t	ft_strsize(int n);
static size_t	ft_isnegative(int *n);
static void		ft_strrev(char *str, size_t size);

char	*ft_itoa(int n)
{
	size_t	i;
	size_t	str_size;
	size_t	neg;
	char	*ptr;

	i = 0;
	neg = 0;
	str_size = ft_strsize(n);
	ptr = ft_calloc(str_size + 1, sizeof(char));
	if (!ptr)
		return (NULL);
	if (n > -2147483648)
		neg = ft_isnegative(&n);
	else
		return (ft_memcpy(ptr, "-2147483648", str_size + 1));
	while (i < (str_size - neg))
	{
		ptr[i++] = ((n % 10) + '0');
		n = n / 10;
	}
	if (neg == 1)
		ptr[i] = '-';
	ptr[str_size] = '\0';
	ft_strrev(ptr, str_size - 1);
	return (ptr);
}

static size_t	ft_strsize(int n)
{
	size_t	size;

	size = 0;
	if (n == 0)
		return (1);
	if (n <= -2147483648)
		return (11);
	if (n < 0)
	{
		n = n * -1;
		size++;
	}
	while (n > 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

static	size_t	ft_isnegative(int *n)
{
	if (*n < 0)
	{
		*n = *n * -1;
		return (1);
	}
	return (0);
}

static void	ft_strrev(char *str, size_t size)
{
	size_t	i;
	char	tmp;

	i = 0;
	while (i <= (size / 2))
	{
		tmp = str[i];
		str[i] = str[size - i];
		str[size - i] = tmp;
		i++;
	}
}
