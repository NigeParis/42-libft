# libft
# 42 Paris - My library 23

## Results

 | Time | Completion |
 | --- | ----|
 | 70h | in progress |
 
### ⚠️  Please don't copy, learn. ⚠️

## C programming and the libft libary
 ### My basic functions
C programming : <br> rewriting functions from the standard C libraries, 
pointers, recursion, command-line arguments, header files, 
dynamic memory allocation and Makefiles to make my own library libft.h

### Libc

tester - G = Libftest

| G |   |  Functions      | Prototypes             |  |
|---|---|-------------|---|------------------------|
| X |  | [`ft_isalpha`](/srcs/ft_isalpha.c)  | int ft\_isalpha(int c) |
| X |  | [`ft_isdigit`](/srcs/ft_isdigit.c)  | int ft\_isdigit(int c) |
| X |  | [`ft_isalnum`](/srcs/ft_isalnum.c)  | int ft\_isalnum(int c) |
| X |  | [`ft_isascii`](/srcs/ft_isascii.c)  | int ft\_isascii(int c) |
| X |  | [`ft_isprint`](/srcs/ft_isprint.c)  | int ft\_isprint(int c) |
| X |  | [`ft_toupper`](/srcs/ft_toupper.c)  | int ft\_toupper(int c) |
| X |  | [`ft_tolower`](/srcs/ft_tolower.c)  | int ft\_islower(int c) |
| X |  | [`ft_bzero`](/srcs/ft_bzero.c)  | void ft\_bzero(void \*s, size\_t n) |
| X |  | [`ft_memset`](/srcs/ft_memset.c)  | void \*ft\_memset(void \*b, int c, size\_t len) |
| X |  | [`ft_strlen`](/srcs/ft_strlen.c)  | size\_t ft\_strlen(const char \*s) |
| X	|  | [`ft_strchr`](/srcs/ft_strchr.c)  | char \*ft\_strchr(const char \*s, int c) |
| X |  | [`ft_strrchr`](/srcs/ft_strrchr.c)  | char \*ft\_strrchr(const char \*s, int c) |
| X |  | [`ft_calloc`](/srcs/ft_calloc.c)  | void	\*ft\_calloc(size\_t count, size\_t size) |
| X |  | [`ft_atoi`](/srcs/ft_atoi.c)  | int	ft\_atoi(const char \*str) |
| X |  | [`ft_strlcpy`](/srcs/ft_strlcpy.c)  | size\_t	ft\_strlcpy(char \*dst, const char \*src, size\_t dstsize) |
| X |  | [`ft_strdup`](/srcs/ft_strdup.c) | char	\*ft\_strdup(const char \*s1) |
| X |  | [`ft_memcpy`](/srcs/ft_memcpy.c)  | void	\*ft\_memcpy(void \*dest, const void \*src, size\_t n) |
| X |  | [`ft_memccpy`](/srcs/ft_memccpy.c)  | void   \*ft\_memccpy(void \*dst, const void \*src, int c, size\_t n) |
| X |  | [`ft_memcmp`](/srcs/ft_memcmp.c)  | int	ft\_memcmp(const void \*s1, const void \*s2, size\_t n) |
| X |  | [`ft_strncmp`](/srcs/ft_strncmp.c)  | int	ft\_strncmp(const char \*s1, const char \*s2, size\_t n) |
| X |  | [`ft_strlcat`](/srcs/ft_strlcat.c)  | size\_t  ft\_strlcat(char \*dst, const char \*src, size\_t dstsize)|
| X |  | [`ft_strnstr`](/srcs/ft_strnstr.c)  | char	\*ft\_strnstr(const char \*big, const char \*little, size\_t len) |
| X |  | [`ft_memchr`](/srcs/ft_memchr.c)  | void	\*ft\_memchr(const void \*s, int c, size\_t n) |
| X |  | [`ft_memmove`](/srcs/ft_memmove.c)  | void	\*ft\_memmove(void \*dest, const void \*src, size\_t n)  |

### Extension

| G |   |  Functions      | Prototypes             |  |
|---|---|-------------|---|------------------------|
| X |   | [`ft_putchar`](/srcs/ft_putchar.c)  |void	ft\_putchar(char c) |
| X |   | [`ft_putchar_fd`](/srcs/ft_putchar_fd.c)  |void	ft\_putchar\_fd(char c, int fd) |
| X |   | [`ft_putstr`](/srcs/ft_putstr.c)  |void	ft\_putstr(char \*str)
| X |   | [`ft_putstr_fd`](/srcs/ft_putstr_fd.c)  |void	ft\_putstr\_fd(char \*s, int fd) |
| X |   | [`ft_putendl_fd`](/srcs/ft_putendl_fd.c)  |void	ft\_putendl\_fd(char \*s, int fd) |
| X |   | [`ft_putnbr_fd`](/srcs/ft_putnbr_fd.c)  | void	ft\_putnbr\_fd(int n, int fd) |
| X |   | [`ft_substr`](/srcs/ft_substr.c)  | char	\*ft\_substr(char const \*s, unsigned int start, size\_t len) |
| X |   | [`ft_strjoin`](/srcs/ft_strjoin.c)  | char	\*ft\_strjoin(char const \*s1, char const \*s2) |
| X |   | [`ft_strtrim`](/srcs/ft_strtrim.c)  | char	\*ft\_strtrim(char const \*s1, char const \*set) |
| X |   | [`ft_split`](/srcs/ft_split.c)  | char \*\*ft\_split(char const \*s, char c) |
| X |   | [`ft_itoa`](/srcs/ft_itoa.c)  | char \*ft\_itoa(int n); |
| X |   | [`ft_strmapi`](/srcs/ft_strmapi.c)  | char \*ft\_strmapi(char const \*s, char (\*f)(unsigned int, char)) |
|   |   | [`ft_striteri`](/srcs/ft\_striteri.c)  | void ft\_striteri(char \*s, void (\*f)(unsigned int, char\*));


### Linked Lists

|  |  |  Functions  |
|---|---|-------------|
|   |   | [`ft_lstnew`]()  |
|   |   | [`ft_lstadd_front`]()  |
|   |   | [`ft_lstsize`]()  |
|   |   | [`ft_lstlast`]()  |
|   |   | [`ft_lstadd_back`]()  |
|   |   | [`ft_lstdelone`]()  |
|   |   | [`ft_lstclear`]()  |
|   |   | [`ft_lstiter`]()  |
|   |   | [`ft_lstmap`]()  |

