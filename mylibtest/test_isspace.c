/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isspace.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:51:15 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/22 19:30:14 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TABLEASCII 255

int main (void)
{
	printf("\n\n================ ft_isspace check ========================\n");

	int i = 0;


	while (i < TABLEASCII)
	{
		if (isspace(i))
			printf("\n; %c is TRUE with   ascii num : %d", i, i);
		else 
			printf("\n %c is false with   ascii num : %d", i, i);
		i++;
	}


printf("\n\n================== ft_isspace check ========================\n");

	return (0);

}
