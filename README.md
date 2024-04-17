# libft
# 42 Paris - My library 23

## Results

 | Time | Completion |
 | ------- | --------|
 | 70h | 125 % |
 
### ⚠️  Please don't copy, learn. ⚠️

## C programming and the libft libary
 ### My basic functions
C programming : <br> rewriting functions from the standard C libraries, 
pointers, recursion, command-line arguments, header files, 
dynamic memory allocation and Makefiles to make my own library libft.h

### Libc

tester - G = Libftest <br>
tester - U = libft-unit-test <br>
tester - T = tripouille <br>

| G | U | T |  Functions      | Prototypes             |  |
|---|---|---|-------------|---|------------------------|
| X | X | X | [`ft_isalpha`](/libft/ft_isalpha.c)  | int ft\_isalpha(int c) |
| X | X | X | [`ft_isdigit`](/libft/ft_isdigit.c)  | int ft\_isdigit(int c) |
| X | X | X | [`ft_isalnum`](/libft/ft_isalnum.c)  | int ft\_isalnum(int c) |
| X | X | X | [`ft_isascii`](/libft/ft_isascii.c)  | int ft\_isascii(int c) |
| X | X | X | [`ft_isprint`](/libft/ft_isprint.c)  | int ft\_isprint(int c) |
| X | X | X | [`ft_toupper`](/libft/ft_toupper.c)  | int ft\_toupper(int c) |
| X | X | X | [`ft_tolower`](/libft/ft_tolower.c)  | int ft\_islower(int c) |
| X | X | X | [`ft_bzero`](/libft/ft_bzero.c)  | void ft\_bzero(void \*s, size\_t n) |
| X | X | X | [`ft_memset`](/libft/ft_memset.c)  | void \*ft\_memset(void \*b, int c, size\_t len) |
| X | X | X | [`ft_strlen`](/libft/ft_strlen.c)  | size\_t ft\_strlen(const char \*s) |
| X	| X | X | [`ft_strchr`](/libft/ft_strchr.c)  | char \*ft\_strchr(const char \*s, int c) |
| X | X | X | [`ft_strrchr`](/libft/ft_strrchr.c)  | char \*ft\_strrchr(const char \*s, int c) |
| X | X | X | [`ft_calloc`](/libft/ft_calloc.c)  | void	\*ft\_calloc(size\_t count, size\_t size) |
| X | X | X | [`ft_atoi`](/libft/ft_atoi.c)  | int	ft\_atoi(const char \*str) |
| - | - | - | [`ft_atol`](/libft/ft_atol.c)  | long int	ft\_atol(const char \*str) |
| X | X | X | [`ft_strlcpy`](/libft/ft_strlcpy.c)  | size\_t	ft\_strlcpy(char \*dst, const char \*src, size\_t dstsize) |
| X | X | X | [`ft_strdup`](/libft/ft_strdup.c) | char	\*ft\_strdup(const char \*s1) |
| X | X | X | [`ft_memcpy`](/libft/ft_memcpy.c)  | void	\*ft\_memcpy(void \*dest, const void \*src, size\_t n) |
| X | X | X | [`ft_memccpy`](/libft/ft_memccpy.c)  | void   \*ft\_memccpy(void \*dst, const void \*src, int c, size\_t n) |
| X | X | X | [`ft_memcmp`](/libft/ft_memcmp.c)  | int	ft\_memcmp(const void \*s1, const void \*s2, size\_t n) |
| X | X | X | [`ft_strncmp`](/libft/ft_strncmp.c)  | int	ft\_strncmp(const char \*s1, const char \*s2, size\_t n) |
| X | X | X | [`ft_strlcat`](/libft/ft_strlcat.c)  | size\_t  ft\_strlcat(char \*dst, const char \*src, size\_t dstsize)|
| X | X | X | [`ft_strnstr`](/libft/ft_strnstr.c)  | char	\*ft\_strnstr(const char \*big, const char \*little, size\_t len) |
| X | X | X | [`ft_memchr`](/libft/ft_memchr.c)  | void	\*ft\_memchr(const void \*s, int c, size\_t n) |
| X | X | X | [`ft_memmove`](/libft/ft_memmove.c)  | void	\*ft\_memmove(void \*dest, const void \*src, size\_t n)  |

### Extension

| G | U | T | Functions   | Prototypes             |  |
|---|---|---|---------|---|------------------------|
| X | - | X | [`ft_putchar`](/libft/ft_putchar.c)  |void	ft\_putchar(char c) |
| X | X | X | [`ft_putchar_fd`](/libft/ft_putchar_fd.c)  |void	ft\_putchar\_fd(char c, int fd) |
| X | X | X | [`ft_putstr`](/libft/ft_putstr.c)  |void	ft\_putstr(char \*str)
| X | X | X | [`ft_putstr_fd`](/libft/ft_putstr_fd.c)  |void	ft\_putstr\_fd(char \*s, int fd) |
| X | X | X | [`ft_putendl_fd`](/libft/ft_putendl_fd.c)  |void	ft\_putendl\_fd(char \*s, int fd) |
| X | X | X | [`ft_putnbr_fd`](/libft/ft_putnbr_fd.c)  | void	ft\_putnbr\_fd(int n, int fd) |
| X | X | X | [`ft_substr`](/libft/ft_substr.c)  | char	\*ft\_substr(char const \*s, unsigned int start, size\_t len) |
| X | X | X | [`ft_strjoin`](/libft/ft_strjoin.c)  | char	\*ft\_strjoin(char const \*s1, char const \*s2) |
| X | X | X | [`ft_strtrim`](/libft/ft_strtrim.c)  | char	\*ft\_strtrim(char const \*s1, char const \*set) |
| X | X | X | [`ft_split`](/libft/ft_split.c)  | char \*\*ft\_split(char const \*s, char c) |
| X | X | X | [`ft_itoa`](/libft/ft_itoa.c)  | char \*ft\_itoa(int n); |
| X | X | X | [`ft_strmapi`](/libft/ft_strmapi.c)  | char \*ft\_strmapi(char const \*s, char (\*f)(unsigned int, char)) |
| X | X | X | [`ft_striteri`](/libft/ft\_striteri.c)  | void ft\_striteri(char \*s, void (\*f)(unsigned int, char\*));


### Linked Lists

| G | U | T | Functions    | Prototypes                    |  |
|---|---|---|-----------|--|--------------------------|
| X | X | X | [`ft_lstnew`](/libft/ft_lstnew_bonus.c)  | t\_list \*ft\_lstnew(void \*content); |
| X | X | X | [`ft_lstadd_front`](/libft/ft_lstadd_front_bonus.c)  | void ft\_lstadd\_front(t\_list \*\*lst, t\_list \*new);|
| X | X | X | [`ft_lstsize`](/libft/ft_lstsize_bonus.c)  | int ft\_lstsize(t\_list \*lst);|
| X | X | X | [`ft_lstlast`](/libft/ft_lstlast_bonus.c)  | t\_list \*ft\_lstlast(t\_list \*lst);|
| X | X | X | [`ft_lstadd_back`](/libft/ft_lstadd_back_bonus.c)  |void ft\_lstadd\_back(t\_list \*\*lst, t\_list \*new);|
| X | X | X | [`ft_lstdelone`](/libft/ft_lstdelone_bonus.c)  | void ft\_lstdelone(t\_list \*lst, void (\*del)(void\*)); |
| X | X | X | [`ft_lstclear`](/libft/ft_lstclear_bonus.c)  | void ft\_lstclear(t\_list \*\*lst, void (\*del)(void\*));|
| X | X | X | [`ft_lstiter`](/libft/ft_lstiter_bonus.c)  | void ft\_lstiter(t\_list \*lst, void (\*f)(void \*));|
| X | X | X | [`ft_lstmap`](/libft/ft_lstmap_bonus.c)  | t\_list \*ft\_lstmap(t\_list \*lst, void \*(\*f)(void \*), void (\*del)(void \*)) |;

