/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:36:21 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/15 18:12:03 by nrobinso         ###   ########.fr       */
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

	printf("\n\n======================== ft_isspace check ========================\n");

	char c;

	c = ' ';
	if (isspace(c))
		printf("\ntrue");

	c = '\n';
	if (isspace(c))
		printf("\ntrue");

	c = '\r';
	if (isspace(c))
		printf("\ntrue");

	c = '\f';
	if (isspace(c))
		printf("\ntrue");


	c = '\t';
	if (isspace(c))
		printf("\ntrue");


	c = '\v';
	if (isspace(c))
		printf("\ntrue");

	c = 'q';
	if (isspace(c))
		printf("\ntrue");
	else	
		printf("\nfalse");


printf("\n\n======================== ft_isspace check ========================\n");


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
/*

printf("\n===================== ft_tolower check ========================\n");

char	*str = "AsZDeFr§§ghKLMPICCVX123R997KKLMéé&dfg";

while (*str)
{
	printf("%c ", ft_tolower(*str));


	str++;
}


printf("\n======================= ft_tolower check ========================\n");
*/
/*

printf("\n======================= ft_strchr check ========================\n");

char	str[] = "abciwdefghijklmnopqrstuvwxyz";
int		c;
char	*result;

c = 'w';

result = ft_strchr(str, c);

printf("\nfound     : %c", *result);
result++;
printf("\nnext char : %c", *result);



printf("\n======================= ft_strchr check ========================\n");
*/
/*
printf("\n======================= ft_strrchr check ========================\n");

char	str[] = "bonjour     :   @     @x";
int		c;
char	*result;

c = '\0';
result = ft_strrchr(str, c);
printf("\nfound.................. : %c", *result);
abcdefghresult++;
printf("\nnext char in the string : %c", *result);

printf("\n======================= ft_strrchr check ========================\n");
*/
/*
printf("\n====================== ft_strncmp check ========================\n");

char	str1[] = "This is a stiing to compare";
char	str2[] = "This is a string to compare";
char	str3[] = "";
char	str4[] = "";
char	str5[] = "A";
char	str6[] = "a";
char	str7[] = "";
char	str8[] = "test";
char	str9[] = "test";
char	str10[] = "";
char	str11[] = "abcdefgh";
char	str12[] = "abcdwxyz";
char	str13[] = "test\200";
char	str14[] = "test\0";
int		result;

printf("\nstr1 :%s", str1);
printf("\nstr2 :%s\n", str2);

result = 0;
result = strncmp(str1, str2, 13);
printf("\nV_Result 'This is a stiing to compare' n = 13 : %d", result);
result = ft_strncmp(str1, str2, 13);
printf("\nF_Result 'This is a string to compare' n = 13 : %d", result);
printf("\n");

result = 0;
result = strncmp(str3, str4, 13);
printf("\nV_Result empty string : n = 13: %d", result);
result = ft_strncmp(str3, str4, 13);
printf("\nF_Result empty string : n = 13: %d", result);
printf("\n");

result = 0;
result = strncmp(str5, str6, 1);
printf("\nV_Result string 'A' : n = 1: %d", result);
result = ft_strncmp(str5, str6, 1);
printf("\nF_Result string 'a' : n = 1: %d", result);
printf("\n");

result = 0;
result = strncmp(str5, str6, 0);
printf("\nV_Result string 'A' : n = 0: %d", result);
result = ft_strncmp(str5, str6, 0);
printf("\nF_Result string 'a' : n = 0: %d", result);
printf("\n");

result = 0;
result = strncmp(str7, str8, 4);
printf("\nV_Result string '' : n = 4: %d", result);
result = ft_strncmp(str7, str8, 4);
printf("\nF_Result string 'test' : n = 4: %d", result);
printf("\n");

result = 0;
result = strncmp(str9, str10, 4);
printf("\nV_Result string 'test' : n = 4: %d", result);
result = ft_strncmp(str9, str10, 4);
printf("\nF_Result string '' : n = 4: %d", result);
printf("\n");

result = 0;
result = strncmp(str11, str12, 4);
printf("\nV_Result string 'abcdefgh' : n = 4: %d", result);
result = ft_strncmp(str11, str12, 4);
printf("\nF_Result string 'abcdwxyz' : n = 4: %d", result);
printf("\n");

result = 0;
result = strncmp(str13, str14, 6);
printf("\nV_Result string 'test\\200' : n = 6: %d", result);
result = ft_strncmp(str13, str14, 6);
printf("\nF_Result string 'test\\0' : n = 6: %d", result);
printf("\n");

printf("\n====================== ft_strncmp check ========================\n");
*/
/*
printf("\n====================== ft_memchr check ========================\n");

char	str_to_search[] = "this is a string to be seached by memchr function";
char	*Vptr;
char	*Fptr;
char	*result_Vptr = NULL;
char	*result_Fptr = NULL;

Vptr = str_to_search;
Fptr = str_to_search;

printf("\n%s\n", str_to_search);

result_Vptr = memchr(Vptr, 't', 0);
result_Fptr = ft_memchr(Fptr, 't', 0);
printf("\n VRAI 't' n = 0: %s", result_Vptr);
printf("\n FAUX 't' n = 0: %s\n", result_Fptr);

result_Vptr = memchr(Vptr, 't', 1);
result_Fptr = ft_memchr(Fptr, 't', 1);
printf("\n VRAI 't' n = 1: %s", result_Vptr);
printf("\n FAUX 't' n = 1: %s\n", result_Fptr);

result_Vptr = memchr(Vptr, 't', 2);
result_Fptr = ft_memchr(Fptr, 't', 2);
printf("\n VRAI 't' n = 2: %s", result_Vptr);
printf("\n FAUX 't' n = 2: %s\n", result_Fptr);

result_Vptr = memchr(Vptr, 's', 9);
result_Fptr = ft_memchr(Fptr, 's', 9);
printf("\n VRAI 's' n = 9: %s", result_Vptr);
printf("\n FAUX 's' n = 9: %s\n", result_Fptr);

result_Vptr = memchr(Vptr, 'q', 35);
result_Fptr = ft_memchr(Fptr, 'q', 35);
printf("\n VRAI 'q' n = 35: %s", result_Vptr);
printf("\n FAUX 'q' n = 35: %s\n", result_Fptr);

result_Vptr = memchr(Vptr, 'm', 35);
result_Fptr = ft_memchr(Fptr, 'm', 35);
printf("\n VRAI 'm' n = 35: %s", result_Vptr);
printf("\n FAUX 'm' n = 35: %s\n", result_Fptr);

result_Vptr = memchr(Vptr, 0, 35);
result_Fptr = ft_memchr(Fptr, 0, 35);
printf("\n VRAI '' n = 35: %s", result_Vptr);
printf("\n FAUX '' n = 35: %s\n", result_Fptr);

printf("\n====================== ft_memchr check ========================\n");
*/
/*
printf("\n====================== ft_memcmp check ========================\n");

int	result;

result = 0;

result = memcmp("s", "string", 6);
printf ("\n\nVrai s1 < s2 = -1 's', 'string',             n = 6 - result :%d", result);
result = ft_memcmp("s", "string", 6);
printf ("\nFaux s1 < s2 = -1 's', 'string',             n = 6 - result :%d", result);

result = memcmp("string", "", 6);
printf ("\n\nVrai s1 > s2 = 1  'string', '',              n = 6 - result : %d", result);
result = ft_memcmp("string", "", 6);
printf ("\nFaux s1 > s2 = 1  'string', '',              n = 6 - result : %d", result);

result = memcmp("stringwww", "stringzzzz", 6);
printf ("\n\nVrai s1 = s2 = 0  'stringwww', 'stringzzzz', n = 6 - result : %d", result);
result = ft_memcmp("stringwww", "stringzzzz", 6);
printf ("\nFaux s1 = s2 = 0  'stringwww', 'stringzzzz', n = 6 - result : %d", result);

result = memcmp("", "", 6);
printf ("\n\nVrai s1 = s2 = 0  '', '',                    n = 6 - result : %d", result);
result = ft_memcmp("", "", 6);
printf ("\nFaux s1 = s2 = 0  '', '',                    n = 6 - result : %d", result);

result = memcmp("", "", 0);
printf ("\n\nVrai s1 = s2 = 0  '', '',                    n = 0 - result : %d", result);
result = ft_memcmp("", "", 0);
printf ("\nfaux s1 = s2 = 0  '', '',                    n = 0 - result : %d", result);

printf("\n\n====================== ft_memcmp check ========================\n");
*/
/*
printf("\n\n====================== ft_strnstr check ========================\n");

char	big[] = "this is bithe big str";
char	little[] = "";
char	*Vresult;
char	*Fresult;

Vresult = strnstr(big, little, 10);
Fresult = ft_strnstr(big, little, 10);
printf("\nVrai : 'this is bithe big str', '',  - len = 10 -> %s", Vresult);
printf("\nFaux : 'this is bithe big str', '',  - len = 10 -> %s\n", Fresult);

Vresult = strnstr(big, "big", 10);
Fresult = ft_strnstr(big, "big", 10);
printf("\nVrai : 'this is bithe big str', 'big',  - len = 10 -> %s", Vresult);
printf("\nFaux : 'this is bithe big str', 'big',  - len = 10 -> %s\n", Fresult);

Vresult = strnstr("", "", 10);
Fresult = ft_strnstr("", "", 10);
printf("\nVrai : '', '',  - len = 10 -> %s", Vresult);
printf("\nFaux : '', '',  - len = 10 -> %s\n", Fresult);

Vresult = strnstr("a", "a", 1);
Fresult = ft_strnstr("a", "a", 1);
printf("\nVrai : 'a', 'a',  - len = 1 -> %s", Vresult);
printf("\nFaux : 'a', 'a',  - len = 1 -> %s\n", Fresult);

Vresult = strnstr("", "a", 1);
Fresult = ft_strnstr("", "a", 1);
printf("\nVrai : '', 'a',  - len = 1 -> %s", Vresult);
printf("\nFaux : '', 'a',  - len = 1 -> %s\n", Fresult);

Vresult = strnstr("sma s sm smal smalll ex samall tec", "small", 200);
Fresult = ft_strnstr("sma s sm smal smalll ex samall tec", "small", 200);
printf("\nVrai : 'sma s sm smal smalll ex samall tec', 'small',  - len = 1 -> %s", Vresult);
printf("\nFaux : 'sma s sm smal smalll ex samall tec', 'small',  - len = 1 -> %s\n", Fresult);

printf("\n\n====================== ft_strnstr check ========================\n");
*/
/*
printf("\n\n====================== ft_atoi check ===========================\n");

int		Vresult;
int		Fresult;

Vresult = atoi("-1");
Fresult = ft_atoi("-1");
printf("\nVrai : '-1' : %d", Vresult);
printf("\nFaux : '-1' : %d\n", Fresult);

Vresult = atoi("1");
Fresult = ft_atoi("1");
printf("\nVrai : '1' : %d", Vresult);
printf("\nFaux : '1' : %d\n", Fresult);

Vresult = atoi("");
Fresult = ft_atoi("");
printf("\nVrai : '' : %d", Vresult);
printf("\nFaux : '' : %d\n", Fresult);

Vresult = atoi("0");
Fresult = ft_atoi("0");
printf("\nVrai : '0' : %d", Vresult);
printf("\nFaux : '0' : %d\n", Fresult);

Vresult = atoi("-0");
Fresult = ft_atoi("-0");
printf("\nVrai : '-0' : %d", Vresult);
printf("\nFaux : '-0' : %d\n", Fresult);

Vresult = atoi("-12345");
Fresult = ft_atoi("-12345");
printf("\nVrai : '-12345' : %d", Vresult);
printf("\nFaux : '-12345' : %d\n", Fresult);

Vresult = atoi("+12345");
Fresult = ft_atoi("+12345");
printf("\nVrai : '+12345' : %d", Vresult);
printf("\nFaux : '+12345' : %d\n", Fresult);

Vresult = atoi("-2147483648");
Fresult = ft_atoi("-2147483648");
printf("\nVrai : '-2147483648' : %d", Vresult);
printf("\nFaux : '-2147483648' : %d\n", Fresult);

Vresult = atoi("2147483647");
Fresult = ft_atoi("2147483647");
printf("\nVrai : '2147483647' : %d", Vresult);
printf("\nFaux : '2147483647' : %d\n", Fresult);

Vresult = atoi("     -123a456");
Fresult = ft_atoi("     -123a456");
printf("\nVrai : '     -123a456' : %d", Vresult);
printf("\nFaux : '     -123a456' : %d\n", Fresult);

Vresult = atoi("\n\f\v\r\t     -   1");
Fresult = ft_atoi("\n\f\v\r\t     -   1");
printf("\nVrai : '\n\f\v\r\t     -   1' : %d", Vresult);
printf("\nFaux : '\n\f\v\r\t     -   1' : %d\n", Fresult);

printf("\n======================== ft_atoi check ===========================\n");
*/
/*
printf("======================== ft_calloc check =========================\n");

char	*ptr = NULL;

ptr = ft_calloc(10, sizeof(char));
if (!ptr)
	return (0);
printf("%s", ptr);

free(ptr);

printf("======================== ft_calloc check =========================\n");
*/
/*
printf("\n======================== ft_strdup check =========================\n");

char	*Fptr;
char	*Vptr;

Vptr = ft_strdup("This-is-the-string-to-copy");
Fptr = ft_strdup("This-is-the-string-to-copy");
printf("\nVrai : '%s'", Vptr);
printf("\nFaux : '%s'", Fptr);
free(Vptr);
free(Fptr);

Vptr = ft_strdup("");
Fptr = ft_strdup("");
printf("\nVrai : '%s'", Vptr);
printf("\nFaux : '%s'", Fptr);
free(Vptr);
free(Fptr);

Vptr = ft_strdup("                                    ");
Fptr = ft_strdup("                                    ");
printf("\nVrai : '%s'", Vptr);
printf("\nFaux : '%s'", Fptr);
free(Vptr);
free(Fptr);

Vptr = ft_strdup("                          \r\r\n          ");
Fptr = ft_strdup("                          \r\r\n          ");
printf("\nVrai : '%s'", Vptr);
printf("\nFaux : '%s'", Fptr);
free(Vptr);
free(Fptr);

printf("\n======================== ft_strdup check =========================\n");
*/
/*
printf("\n======================== ft_memccpy check =========================\n");

	char	src[] = "zyxwvutsrqponmlkjihgfedcba";
	char	Vdst[30];
	char	Fdst[30];
	char	*Vptr;
	char	*Fptr;

	Fptr = NULL;
	Vptr = NULL;

	ft_memset(Vdst, 'j', 29);
	Vptr = memccpy(Vdst, src, 'r', 20);
	printf("\nVrai : '%s'", Vdst);
	printf("\nVrai ptr  : '%p'", Vptr);
	printf("\nVrai ptr  : '%s'", Vptr);
	ft_memset(Fdst, 'j', 29);
	Fptr = ft_memccpy(Fdst, src, 'r', 20);
	printf("\nFaux : '%s'", Fdst);
	printf("\nFaux ptr  : '%p'", Fptr);
	printf("\nFaux ptr  : '%s'", Fptr);

printf("\n======================== ft_memccpy check =========================\n");
*/
/*
printf("\n======================== ft_substr check =========================\n");

	char	str[] = "This-is-the-string-to-get-substring";
	char	*ptr_to_substr;

	ptr_to_substr = NULL;
	ptr_to_substr = ft_substr(str, 8, 3);
	printf("\nstring : '%s'",str);
	printf("\nResult : '%s' - start 8, len 3\n", ptr_to_substr);
	free(ptr_to_substr);

	ptr_to_substr = NULL;
	ptr_to_substr = ft_substr(str, 1, 1);
	printf("\nstring : '%s'",str);
	printf("\nResult : '%s' - start 1, len 1\n", ptr_to_substr);
	free(ptr_to_substr);

	ptr_to_substr = NULL;
	ptr_to_substr = ft_substr(str, 0, 1);
	printf("\nstring : '%s'",str);
	printf("\nResult : '%s' - start 0, len 1\n", ptr_to_substr);
	free(ptr_to_substr);

	ptr_to_substr = NULL;
	ptr_to_substr = ft_substr(str, 34, 10);
	printf("\nstring : '%s'",str);
	printf("\nResult : '%s' - start 34, len 10\n", ptr_to_substr);
	free(ptr_to_substr);

	ptr_to_substr = NULL;
	ptr_to_substr = ft_substr("", 10, 14);
	printf("\nstring : ''");
	printf("\nResult : '%s' - empty str start 34, len 10\n", ptr_to_substr);
	free(ptr_to_substr);


	ptr_to_substr = NULL;
	ptr_to_substr = ft_substr("One two", 0, 0);
	printf("\nstring : ''");
	printf("\nResult : '%s' - start 0, len 0\n", ptr_to_substr);
	free(ptr_to_substr);

printf("\n======================== ft_substr check =========================\n");
*/
/*
printf("\n======================== ft_strjoin check =========================\n");

char	*result;

result = ft_strjoin("This is a string", " and this is another");
printf("\nresult : '%s'", result);
free(result);

result = ft_strjoin("", " and this is another");
printf("\nresult : '%s'", result);
free(result);

result = ft_strjoin("", "");
printf("\nresult : '%s'", result);
free(result);

result = ft_strjoin("", "z");
printf("\nresult : '%s'", result);
free(result);

printf("\n======================== ft_strjoin check =========================\n");
*/

printf("\n======================== ft_strtrim check =========================\n");

	char	*result;

	result = NULL;
	result = ft_strtrim("hekllo-sentence", "hello");

	printf("\nresult : '%s'", result);
	free(result);




printf("\n======================== ft_strtrim check =========================\n");
	return (0);
}
