/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:12:26 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/08 09:45:37 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}
/*

#include <unistd.h>

int	main(void)
{

	ft_putstr("helloWorld");

	return (0);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
