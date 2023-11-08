/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 08:56:38 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/08 18:22:58 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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

*/

/*

	printf("\n=================== ft_ft_memset check ========================\n");

	int loop = 0;
	int input_char = 0;
	while (input_char <= 127)
	{
		while( loop < 2)
		{
			char str[] = "\n\t\t\f\r\n\r\0";
    		int len_str = ft_strlen(str);
    		size_t size = sizeof(char) * len_str;
			int len;

			len = 0;
			if(loop == 0)
	
	
    			printf( "\n Faux ft_memset function\n" );
			else
    			printf( "\n Vrai memset function\n" );
    		while(len < len_str) 
			{
        		printf("%c ", str[len]);
				len++;
    		}
    		printf("\n");
			if (loop == 0)
			{
    			ft_memset(str, input_char, size);
				len = 0;
    			while (len < len_str) 
				{
        			printf("%c ", str[len]);
					len++;
	
    			}
    			printf( "\n" );
			}
			else
			{
				memset(str, input_char, size);
		
				len = 0;
    			while (len < len_str) 
				{
        			printf("%c ", str[len]);
					len++;
    			}
			printf("\n=================== ft_ft_memset check ========================\n");
			}
			loop++;
		}
	input_char++;
	loop = 0;
	}
*/


/*
	printf("\n=================== ft_ft_bzero check ========================\n");

	int loop = 0;
	int nbr = 9;
	while( loop < 2)
	{
		char str[] = "123456789abcdef";
    	int len_str = ft_strlen(str) - nbr;
    	size_t size = sizeof(char) * len_str;
		int len;

		len = 0;
		if(loop == 0)
    		printf( "\n Faux ft_bzero function\n" );
		else
    		printf( "\n Vrai bzero function\n" );
    	while(len < len_str + nbr) 
		{
       		printf("%c", str[len]);
			len++;
    	}
    	printf("\n");
		if (loop == 0)
		{
    		ft_bzero(str, size);
			len = 0;
    		while (len < len_str + nbr) 
			{
        		printf("%c", str[len]);
				len++;
    		}
    		printf( "\n" );
		}
		else
		{
			bzero(str, size);
		
			len = 0;
    		while (len < len_str + nbr) 
			{
        		printf("%c", str[len]);
				len++;
    		}
			printf("\n=================== ft_ft_bzero check ========================\n");
		}
		loop++;
	}
	loop = 0;
*/


printf("\n=================== ft_ft_memcpy check ========================\n");

char str[] = "#$rrrdddqW!@@!";
char *copy = NULL;
char *ptr_copy = NULL;
char *ptr2_copy = NULL;
char *ftcopy = NULL;
int	str_size = 10;


ptr_copy = memcpy(copy, str, str_size);
ptr2_copy = ft_memcpy(ftcopy, str, str_size);

//ft_putchar(ptr2_copy[1]);

printf("\n=================== ft_ft_memcpy check ========================\n");


/*
printf("\n=================== ft_ft_memmove check ========================\n");


char a[30] = "That's not what I said." ;

memmove( a+7, a+11, 13 );      // Move 13 bytes, 'w' through '\0'

printf("Vrai : %s", a );


printf("\n=================== ft_ft_memmove check ========================\n");
*/
	return (0);
}
