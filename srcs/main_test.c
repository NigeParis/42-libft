/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 08:56:38 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/07 22:43:57 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define TABLEASCII 256

int	main(void)
{
/*

	int	c;
	int	ch;
	int asc;	
	int i;
	char next;


	printf("\n=================== ft_isalpha check ===========================");

	i = TABLEASCII;
	asc = i - 1;
	c = 0;
	ch = 0;
	next = '\0';

	while ( i != 0 )
	{
		c = ft_isalpha(asc);
		ch = isalpha(asc);
		printf("\nFaux:%d Vrai:%d  ch print:'%c' nbr ascii:%d", c, ch, asc, asc);
		i--;
		asc = asc - 1;
	}
	
	printf("\n=================== ft_isalpha check =========================\n");

	scanf("%c", &next);

	printf("\n=================== ft_isdigit check ===========================");

	i = TABLEASCII;
	asc = i - 1;
	c = 0;
	ch = 0;

	while ( i != 0 )
	{
		c = ft_isdigit(asc);
		ch = isdigit(asc);
		printf("\nFaux:%d Vrai:%d  ch print:'%c' nbr ascii:%d", c, ch, asc, asc);
		i--;
		asc = asc - 1;
	}

	printf("\n=================== ft_isdigit check =========================\n");

	scanf("%c", &next);

	printf("\n=================== ft_isalnum check ===========================");

	i = TABLEASCII;
	asc = i - 1;
	c = 0;
	ch = 0;


	while ( i != 0 )
	{
		c = ft_isalnum(asc);
		ch = isalnum(asc);
		printf("\nFaux:%d Vrai:%d  ch print:'%c' nbr ascii:%d", c, ch, asc, asc);
		i--;
		asc = asc - 1;
	}


	printf("\n=================== ft_isalnum check ===========================");

	scanf("%c", &next);

	printf("\n=================== ft_isascii check ===========================");

	i = TABLEASCII;
	asc = i - 1;
	c = 0;
	ch = 0;


	while ( i != 0)
	{
		c = ft_isascii(asc);
		ch = isascii(asc);

		printf("\nFaux:%d Vrai:%d  ch print:'%c' nbr ascii:%d", c, ch, asc, asc);
		i--;
		asc = asc - 1;
	}

	printf("\n=================== ft_isascii check ===========================");

	scanf("%c", &next);

	printf("\n=================== ft_isprint check ===========================");

	i = TABLEASCII;
	asc = i - 1;
	c = 0;
	ch = 0;

	while ( i != 0 )
	{
		c = ft_isprint(asc);
		ch = isprint(asc);


		printf("\nFaux:%d Vrai:%d  ch print:'%c' nbr ascii:%d", c, ch, asc, asc);
		i--;
		asc = asc - 1;
	}

	printf("\n=================== ft_isprint check ===========================");

	scanf("%c", &next);
*/

	printf("\n=================== ft_strlen check ===========================");
	
	char	*str[200] ={
	"One length",
	"a",
	"@izz'edf",
	"ZxxxER'(    \t",
	"",
	"\0"
	};

	int ft_len = 0;
	int len = 0;
	int i = 0;

	while (str[i])
	{
		ft_len = ft_strlen(str[i]);
		len = strlen(str[i]);
		printf("\nFalse:%d Vrai:%d - str ='%s'",ft_len, len, str[i]);
		i++;
	}

	printf("\n=================== ft_strlen check ===========================");
	return (0);
}



