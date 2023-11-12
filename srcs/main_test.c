/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 08:56:38 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/12 22:09:13 by nrobinso         ###   ########.fr       */
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

/*
printf("\n=================== ft_ft_memcpy check ========================\n");

char src[] = "A";
int	array[20] = {84,104,105,115,32,105,115,32,97,32};
char ft_dest[20] = "0";
char *ft_ptr;
char dest[20] = "0";
char *ptr;
int *ptr_int;
int *ft_ptr_int;
int i;
int end = ft_strlen(src);
int ft_end = 10;
int dst[20];
int ft_dst[20];


ptr = memcpy(dest, src, 10);
ft_ptr = ft_memcpy(ft_dest, src, 10);

i = 0;
printf("\nmemcpy (char)     :");
while (i < end)
{
	printf("%d ",ptr[i]);
	i++;
}
i = 0;
printf("\nft_memcpy (char)  :");
while (i < end)
{
	printf("%d ",ft_ptr[i]);
	i++;
}

printf("\nmemcpy            :");
printf("%s ",ptr);
printf("\nft_memcpy         :");
printf("%s ",ft_ptr);

i  = 0;
ptr_int = memcpy(dst, array, 20 * 4);
printf("\nmemcpy (int)      :");
while (i < ft_end)
{
	printf("%d ",ptr_int[i++]);
}

i  = 0;
ft_ptr_int = ft_memcpy(ft_dst, array, 20 * 4);
printf("\nft_memcpy (int)   :");
while (i < ft_end)
{
	printf("%d ",ft_ptr_int[i++]);
}




printf("\n=================== ft_ft_memcpy check ========================\n");
*/

/*
printf("\n=================== ft_ft_memmove check ========================\n");


char a[] = "That's not what I said." ;
char b[] = "That's not what I said." ;
char c[] = "That's not what I said." ;

ft_memmove( a+7, a+11, 16 );      // Move 13 bytes, 'w' through '\0'
memmove( b+7, b+11, 16 );         // Move 13 bytes, 'w' through '\0'
printf("\nVrai         : %s", b );
printf("\nFaux         : %s", a );

ft_memmove( a, c, 24);            // Reset char a[]
memmove( b, c, 24 );              // Reset char b[]
printf("\nVrai - reset : %s", b );
printf("\nFaux - reset : %s", a );

ft_memmove( a+3, a+1, 16 );      // Move 16 bytes, 'h' through '\0'
memmove( b+3, b+1, 16 );         // Move 16 bytes, 'h' through '\0'
printf("\nVrai         : %s", b );
printf("\nFaux         : %s", a );

ft_memmove( a, c, 24);            // Reset char a[]
memmove( b, c, 24 );              // Reset char b[]
printf("\nVrai - reset : %s", b );
printf("\nFaux - reset : %s", a );

printf("\n=================== ft_ft_memmove check ========================\n");
*/

/*
printf("\n=================== ft_ft_strlcpy check ========================\n");
#define SIZE 32

char	src[] = "This-is-the-string-to-be-copied";
char	V_dest[SIZE];
char	F_dest[SIZE];
char	S_dest[SIZE];
size_t	V_ret_nbr;
size_t	F_ret_nbr;
int		S_ret_nbr;

printf("\nSTR: %s : %d chars including NULL term", src, ft_strlen(src) + 1);
printf("\n----------------------------------------------------------------");

ft_memset(V_dest, 'r', 6);
ft_memset(S_dest, 'r', 6);
ft_memset(F_dest, 'r', 6);


V_ret_nbr = strlcpy(V_dest, src, 0);
S_ret_nbr = snprintf(S_dest, 0, "%s", src);
F_ret_nbr = ft_strlcpy(F_dest, src, 0);
printf("\nVRAI dstsize = 0: '%s'  : %ld", V_dest, V_ret_nbr);
printf("\nSnprintf dts = 0: '%s'  : %d", S_dest, S_ret_nbr);
printf("\nFAUX dstsize = 0: '%s'  : %ld\n", F_dest, F_ret_nbr);


ft_memset(V_dest, 'r', 6);
ft_memset(S_dest, 'r', 6);
ft_memset(F_dest, 'r', 6);


V_ret_nbr = strlcpy(V_dest, src, 20);
S_ret_nbr = snprintf(S_dest, 20, "%s", src);
F_ret_nbr = ft_strlcpy(F_dest, src, 20);
printf("\nVRAI: dstsize < src '%s' : %ld", V_dest, V_ret_nbr);
printf("\nSPRI: dstsize < src '%s' : %d", S_dest, S_ret_nbr);
printf("\nFAUX: dstsize < src '%s' : %ld\n", F_dest, F_ret_nbr);

ft_memset(V_dest, 'r', 6);
ft_memset(S_dest, 'r', 6);
ft_memset(F_dest, 'r', 6);

V_ret_nbr = strlcpy(V_dest, "", 0);
S_ret_nbr = snprintf(S_dest, 0, "%s", "");
F_ret_nbr = ft_strlcpy(F_dest, "", 0);
printf("\nVRAI: emtpy src et dstsize '%s' : %ld", V_dest, V_ret_nbr);
printf("\nSPRI: empty src et dstsize '%s' : %d", S_dest, S_ret_nbr);
printf("\nFAUX: empty src et dstsize '%s' : %ld\n", F_dest, F_ret_nbr);


ft_memset(V_dest, 'r', 6);
ft_memset(S_dest, 'r', 6);
ft_memset(F_dest, 'r', 6);


V_ret_nbr = strlcpy(V_dest, src, 32);
S_ret_nbr = snprintf(S_dest, 32, "%s", src);
F_ret_nbr = ft_strlcpy(F_dest, src, 32);
ft_putchar_fd('\n', 1);
printf("\nVRAI: dstsize = src '%s' : %ld", V_dest, V_ret_nbr);
ft_putstr("VRAI    srtlcpy ");
ft_putstr_fd(V_dest, 1);
ft_putchar_fd('\n', 1);
printf("\nSPRI: dstsize = src '%s' : %d", S_dest, S_ret_nbr);
ft_putstr("VRAI   snprintf ");
ft_putstr_fd(S_dest, 1);
ft_putchar_fd('\n', 1);
printf("\nFAUX: dstsize = src '%s' : %ld\n", F_dest, F_ret_nbr);
ft_putstr("FAUX ft_srtlcpy ");
ft_putstr_fd(F_dest, 1);
ft_putchar_fd('\n', 1);
ft_putchar_fd('\n', 1);


ft_memset(V_dest, 'r', 6);
ft_memset(S_dest, 'r', 6);
ft_memset(F_dest, 'r', 6);

V_ret_nbr = strlcpy(V_dest, "", 15);
S_ret_nbr = snprintf(S_dest, 15, "%s", "");
F_ret_nbr = ft_strlcpy(F_dest, "", 15);
ft_putchar_fd('\n', 1);
printf("\nVRAI: dstsize = src '%s' : %ld", V_dest, V_ret_nbr);
ft_putstr("VRAI    srtlcpy ");
ft_putstr_fd(V_dest, 1);
ft_putchar_fd('\n', 1);
printf("\nSPRI: dstsize = src '%s' : %d", S_dest, S_ret_nbr);
ft_putstr("VRAI   snprintf ");
ft_putstr_fd(S_dest, 1);
ft_putchar_fd('\n', 1);
printf("\nFAUX: dstsize = src '%s' : %ld\n", F_dest, F_ret_nbr);
ft_putstr("FAUX ft_srtlcpy ");
ft_putstr_fd(F_dest, 1);
ft_putchar_fd('\n', 1);
ft_putchar_fd('\n', 1);


ft_memset(V_dest, 'r', 6);
ft_memset(S_dest, 'r', 6);
ft_memset(F_dest, 'r', 6);

V_ret_nbr = strlcpy(V_dest, "12345", 15);
S_ret_nbr = snprintf(S_dest, 15, "%s", "12345");
F_ret_nbr = ft_strlcpy(F_dest, "12345", 15);
ft_putchar_fd('\n', 1);
printf("\nVRAI: dstsize = src '%s' : %ld", V_dest, V_ret_nbr);
ft_putstr("VRAI    srtlcpy ");
ft_putstr_fd(V_dest, 1);
ft_putchar_fd('\n', 1);
printf("\nSPRI: dstsize = src '%s' : %d", S_dest, S_ret_nbr);
ft_putstr("VRAI   snprintf ");
ft_putstr_fd(S_dest, 1);
ft_putchar_fd('\n', 1);
printf("\nFAUX: dstsize = src '%s' : %ld\n", F_dest, F_ret_nbr);
ft_putstr("FAUX ft_srtlcpy ");
ft_putstr_fd(F_dest, 1);
ft_putchar_fd('\n', 1);
ft_putchar_fd('\n', 1);



printf("\n=================== ft_ft_strlcpy check ========================\n");
*/
/*
printf("\n=================== ft_ft_strlcat check ========================\n");

#define BUFFER 40

char	S_dest[BUFFER] = "";
char	F_dest[BUFFER] = "";
char	S_str_to_add[] = "123456";
char	F_str_to_add[] = "123456";
size_t	dstsize;
size_t	S_len;
size_t	F_len;
S_len = 0;
F_len = 0;

dstsize = 6;

//S_len = snprintf(S_dest, BUFFER, "%s%s", S_dest, S_str_to_add );
S_len = strlcat(S_dest, S_str_to_add, dstsize);
F_len = ft_strlcat(F_dest, F_str_to_add, dstsize);

printf("\nS_dest dstsize 1, BUFFER 10 : %s  :%zu", S_dest, S_len);
printf("\nF_dest dstsize 1, BUFFER 10 : %s  :%zu\n", F_dest, F_len);

ft_memset(S_dest, '\0', 6);
ft_memset(F_dest, '\0', 6);
dstsize =10;

S_len = strlcat(S_dest, S_str_to_add, dstsize);
F_len = ft_strlcat(F_dest, F_str_to_add, dstsize);

printf("\nV_dest empty  BUFFER 10 : %s  :%zu", S_dest, S_len);
printf("\nF_dest empty  BUFFER 10 : %s  :%zu\n", F_dest, F_len);

ft_memset(S_dest, 'r', 6);
ft_memset(F_dest, 'r', 6);
dstsize =10;

S_len = strlcat(S_dest, S_str_to_add, dstsize);
F_len = ft_strlcat(F_dest, F_str_to_add, dstsize);

printf("\nV_dest empty  BUFFER 10 : %s  :%zu", S_dest, S_len);
printf("\nF_dest ssss   BUFFER 10 : %s  :%zu\n", F_dest, F_len);

ft_memset(S_dest, 'A', 10);
ft_memset(F_dest, 'A', 10);
dstsize =22;

S_len = strlcat(S_dest, S_str_to_add, dstsize);
F_len = ft_strlcat(F_dest, F_str_to_add, dstsize);

printf("\nV_dest empty  BUFFER 10 : %s  :%zu", S_dest, S_len);
printf("\nF_dest ssss   BUFFER 10 : %s  :%zu\n", F_dest, F_len);

printf("\n====================== ft_strlcat check ========================\n");
*/
/*

printf("\n====================== ft_toupper check ========================\n");

char	str[] = "azjdkTHlm(mlkjsdbuzjz;qm;qna";
int i = 0;

while (str[i])
{
		printf("%c ", (int)str[i]);
		i++;
}
printf("\n");
i = 0;
while (str[i])
{
		printf("%c ", ft_toupper((int)str[i]));
		i++;
}


printf("\n======================= ft_toupper check ========================\n");
*/


printf("\n===================== ft_tolower check ========================\n");

char	*str = "AsZDeFr§§ghKLMPICCVX123R997KKLMéé&dfg";

while (*str)
{
	printf("%c ", ft_tolower(*str));


	str++;
}


printf("\n======================= ft_tolower check ========================\n");


	return (0);
}
