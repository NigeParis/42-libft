/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 08:56:38 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/07 18:05:35 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <ctype.h>
#include <stdio.h>
#define TABLEASCII 256

int	main(void)
{
	int	c;
	int	ch;
	int asc;	
	int i;
	char next;

	i = TABLEASCII;
	asc = i - 1;
	c = 0;
	ch = 0;
	next = '\0';

	printf("\n=================== ft_isalpha check ===========================");
	while ( i != 0 )
	{
		c = ft_isalpha(asc);
		ch = isalpha(asc);
		printf("\nFaux:%d Vrai:%d  ch print:'%c' nbr ascii:%d", c, ch, asc, asc);
		i--;
		asc = asc - 1;
	}
	i = TABLEASCII;
	asc = i - 1;
	c = 0;
	ch = 0;

	printf("\n================================================================\n");

	scanf("%s", next);

	printf("\n=================== ft_isalpha check ===========================");
	while ( i != 0 )
	{
		c = ft_isalpha(asc);
		c = isalpha(asc);
		printf("\nFaux:%d Vrai:%d  ch print:'%c' nbr ascii:%d", c, ch, asc, asc);
		i--;
		asc = asc - 1;
	}

	printf("\n================================================================\n");


	i = TABLEASCII;
	asc = i - 1;
	c = 0;
	ch = 0;


	printf("\n=================== ft_isalnum check ===========================");
	while ( i != 0 )
	{
		c = ft_isalnum(asc);
		c = isalnum(asc);
		printf("\nFaux:%d Vrai:%d  ch print:'%c' nbr ascii:%d", c, ch, asc, asc);
		i--;
		asc = asc - 1;
	}


	printf("\n================================================================\n");


	i = TABLEASCII;
	asc = i - 1;
	c = 0;
	ch = 0;


	printf("\n=================== ft_isascii check ===========================");
	while ( i != 0)
	{
		c = ft_isascii(asc);
		c = isascii(asc);

		printf("\nFaux:%d Vrai:%d  ch print:'%c' nbr ascii:%d", c, ch, asc, asc);
		i--;
		asc = asc - 1;
	}

	printf("\n================================================================\n");


	i = TABLEASCII;
	asc = i - 1;
	c = 0;
	ch = 0;


	printf("\n=================== ft_isprint check ===========================");
	while ( i != 0 )
	{
		c = ft_isprint(asc);
		ch = isprint(asc);


		printf("\nFaux:%d Vrai:%d  ch print:'%c' nbr ascii:%d", c, ch, asc, asc);
		i--;
		asc = asc - 1;
	}
	printf("\n================================================================\n");


	return (0);
}
