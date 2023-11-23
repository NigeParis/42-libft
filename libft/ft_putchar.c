/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:53:22 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/23 13:51:55 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int	ft_putchar(int c)
{
	unsigned char *ptr;
	unsigned char ch;
	
	ch =(unsigned char)c;
	ptr = &ch;
	write(1, ptr, 1);
	return (c);
}
