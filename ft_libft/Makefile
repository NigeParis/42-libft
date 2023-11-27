###############################################################################
## ARGUMENTS

NAME=libft.a
CFLAGS=-Wall -Wextra -Werror
SRCS=$(addprefix $(SRC_DIR), $(SRC))
OBJ=$(SRC:.c=.o)
HEAD=$(addprefix $(INCLUDE), $(HEADER))
CCOPTIONS=-c
SRC_OBJ=$(addprefix $(OBJ_DIR), $(OBJ))
BONUS_SRC=$(addprefix $(BONUS_DIR), $(BONUS))
BONUS_OBJ=$(addprefix $(BONUS_DIR), $(BONUS:.c=.o))
CC=cc

###############################################################################
## SOURCES 

SRC_DIR=
OBJ_DIR=
BONUS_DIR=
INCLUDE=
SRC=ft_putchar_fd.c
SRC+=ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
SRC+=ft_isalpha.c ft_isdigit.c ft_isalnum.c
SRC+=ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c
SRC+=ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c
SRC+=ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c
SRC+=ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c
SRC+=ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c
SRC+=ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c

BONUS=ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c
BONUS+=ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c
BONUS+=ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
HEADER=libft.h
###############################################################################
## RULES

all: $(NAME)
	@echo "\nDone ! .......\n"

$(NAME): $(OBJ)
	@echo "\nCreating Libft.a FILE .......\n"
	ar -rcs $(NAME) $(OBJ)
$(OBJ):
	@echo "\nCOMPILE all c files to .o FILES .......\n"
	$(CC) $(CFLAGS) $(CCOPTIONS) $(SRCS) -I./$(HEAD)

bonus:
	@echo "\nCOMPILE all c files to .o FILES .......\n"
	$(CC) $(CFLAGS) $(CCOPTIONS) $(SRCS) -I./$(HEAD)
	$(CC) $(CFLAGS) $(CCOPTIONS) $(BONUS_SRC) -I./$(HEAD)
	@echo "\nCreating Libft.a FILE .......\n"
	ar -rcs $(NAME) $(OBJ) $(BONUS_OBJ)
	@echo "\nDone ! with bonus functions ......\n"
	
clean:
	rm -f $(SRC_OBJ) $(BONUS_OBJ)

fclean:clean
	@echo "\nFCLEAN all .o et .a files .......\n"
	rm -f $(NAME)

re:fclean all
	@echo "\nAll erased and re-compiled .......\n"

.PHONY: all clean fclean re bonus
