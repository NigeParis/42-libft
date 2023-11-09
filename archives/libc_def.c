

isalpha   int isalpha(int c);  lctype.h

The C library function int isalpha(int c) checks if the passed character is alphabetic.

This function returns non-zero value if c is an alphabet, else it returns 0.



isdigit   int isdigit(int c);  lctype.h

The C library function int isdigit(int c) checks if the passed character is a decimal digit character.

Decimal digits are (numbers) − 0 1 2 3 4 5 6 7 8 9.

This function returns non-zero value if c is a digit, else it returns 0.



isalnum   int isalnum(int c);    lctype.h

The C library function int isalnum(int c) checks if the passed character is alphanumeric.

This function returns non-zero value if c is a digit or a letter, else it returns 0.


isascii   int isascii(int c); lctype.h

isascii tests an integer value c to determine whether it is the EBCDIC equivalent of a character belonging to the ASCII character set.

isascii returns 0 if the character is not ASCII, or a nonzero value if it is ASCII. If the argument does not have a char value, 0 is returned.


isprint    int isprint(int c);

he C library function int isprint(int c) checks whether the passed character is printable. A printable character is a character that is not a control character.

This function returns a non-zero value(true) if c is a printable character else, zero (false).



strlen    size_t strlen(const char *str);    strings.h

strlen returns the length of a null-terminated character string str 
size_t : This is the unsigned integral type and is the result of the sizeof keyword

The return value is the length of the string, not counting the terminating null.




bzero      void bzero(void *s, size_t n);   strings.h

The bzero() function shall place n zero-valued bytes in the area pointed to by s.

The bzero() function shall not return a value.



memcpy      void *memcpy(void *to, const void *from, size_t n);   string.h

 memcpy copies the number of bytes specified by n from one area of memory ( from ) to another ( to ). All bytes, including any null characters, are copied.

 memcpy returns a pointer to the to area.



memmove   void *memmove(void *to, const void *from, size_t n);    string.h

memmove is identical to memcpy except that the copy is guaranteed to work correctly even if the to and from objects overlap. On completion of the call, the n bytes addressed by to are identical to the n bytes addressed by from before the call.

 memmove returns a pointer to the to area.

The third argument to memmove is size_t . If a negative number is passed, massive overlaying of memory may occur.



strlcpy       size_t strlcpy(char *dst, const char *src, size_t dstsize);   string.h

Copy a string. Copy src to string dst of size siz. At most siz-1 characters will be copied. Always NULL terminates (unless siz == 0).

The strlcpy() function returns strlen(src). If retval >= siz, truncation occurred.

Copy src to string dst of size siz. At most siz-1 characters will be copied. Always NULL terminates (unless siz == 0).


strlcat       size_t strlcat (char * dst, const char * src, size_t siz)   string.h

Concatenate two strings. Appends src to string dst of size siz (unlike strncat(), siz is the full size of dst, not space left). At most siz-1 characters will be copied. Always NULL terminates (unless siz <= strlen(dst)).

The strlcat() function returns strlen(src) + MIN(siz, strlen(initial dst)). If retval >= siz, truncation occurred.
Appends src to string dst of size siz (unlike strncat(), siz is the full size of dst, not space left). At most siz-1 characters will be copied. Always NULL terminates (unless siz <= strlen(dst)).

The strlcat() function returns strlen(src) + MIN(siz, strlen(initial dst)). If retval >= siz, truncation occurred.


toupper        int toupper(int c);   ctype.h

toupper translates a lowercase character c to the corresponding uppercase character. The argument must either be a char value or EOF . The mapping of lowercase to uppercase characters is locale dependent.


If the argument is a lowercase character, the corresponding uppercase character is returned; otherwise, the argument value is returned.



tolower    int tolower(int c);   ctype.h

tolower translates an uppercase character to the corresponding lowercase character. The argument must either be a char value or EOF . The mapping of uppercase to lowercase characters is locale dependent.

If the argument is an uppercase character, the corresponding lowercase character is returned; otherwise, the argument value is returned.



strrchr     char *strrchr(const char *str, int ch);

 strrchr searches an input string str for the last occurrence of a search character ch . The strrchr function is the reverse of strchr .

strrchr returns a character pointer to the last occurrence of the search character in the input string, or NULL if the character is not found. If the search character is the null character ('\0'), the return value addresses the null character at the end of the input string.

A protection or addressing exception may occur if the input string is not properly terminated with the null character.



      















   









