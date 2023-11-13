###############################################################################
## ARGUMENTS

NAME=out
EXEC=libft.a
CFLAGS=-Wall -Wextra -Werror
SRCS=$(addprefix $(SRC_DIR), $(SRC))
OBJ=$(SRC:.c=.o)
HEAD=$(addprefix $(INCLUDE), $(HEADER))
CC=cc
MAIN_SRC=$(addprefix $(SRC_DIR), $(MAIN))
MAIN_OBJ=$(addprefix $(OBJ_DIR), $(MAIN))
SRC_OBJ=$(addprefix $(OBJ_DIR), $(OBJ))

###############################################################################
## SOURCES 

SRC_DIR=
OBJ_DIR=objs/
INCLUDE=
SRC=ft_putchar.c ft_putstr.c ft_putchar_fd.c
SRC+=ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c
SRC+=ft_islower.c ft_isupper.c ft_isalpha.c ft_isdigit.c ft_isalnum.c
SRC+=ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c
SRC+=ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c
SRC+=ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c
HEADER=libft.h
MAIN=main_test

###############################################################################
## RULES

all: $(NAME)
	@mv $(OBJ) $(OBJ_DIR)
	@echo "\nDone ! .......\n"

$(NAME): $(OBJ)
	@echo "\nCreating Libft.a FILE .......\n"
	ar -rcs $(EXEC) $(OBJ)
	@echo "\nlinking FILES .......\n"
	cc $(OBJ) $(MAIN_OBJ).o -o $(NAME)
$(OBJ):
	@echo "\nCOMPILE all c files to .o FILES .......\n"
	$(CC) $(CFLAGS) -c -g $(SRCS) -I $(HEAD)
	$(CC) $(CFLAGS) -c -g $(MAIN_SRC).c -I$(HEAD) -o $(MAIN_OBJ).o

clean:
	rm -f $(SRC_OBJ) $(MAIN_OBJ).o *.o

fclean:clean
	@echo "\nFCLEAN all .o et .a files .......\n"
	rm -f $(NAME) $(MAIN).o	

re:fclean all
	@echo "\nAll erased and re compiled .......\n"

.PHONY: all clean fclean re 
