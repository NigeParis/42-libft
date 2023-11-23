###############################################################################
## ARGUMENTS

NAME=out
EXEC=libft.a
CFLAGS=-Wall -Wextra -Werror -fPIC
SRCS=$(addprefix $(SRC_DIR), $(SRC))
OBJ=$(SRC:.c=.o)
HEAD=$(addprefix $(INCLUDE), $(HEADER))
CCOPTIONS=-c -g
MAIN_SRC=$(addprefix $(SRC_DIR), $(MAIN))
MAIN_OBJ=$(addprefix $(OBJ_DIR), $(MAIN))
SRC_OBJ=$(addprefix $(OBJ_DIR), $(OBJ))
BONUS_SRC=$(addprefix $(BONUS_DIR), $(BONUS))
BONUS_OBJ=$(addprefix $(BONUS_DIR), $(BONUS:.c=.o))
CC=cc

###############################################################################
## SOURCES 

SRC_DIR=../libft/
OBJ_DIR=../libft/
BONUS_DIR=../libft/
INCLUDE=
SRC=ft_putchar.c ft_putstr.c ft_putchar_fd.c
SRC+=ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
SRC+=ft_islower.c ft_isupper.c ft_isalpha.c ft_isdigit.c ft_isalnum.c
SRC+=ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c
SRC+=ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c
SRC+=ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c
SRC+=ft_memcmp.c ft_strnstr.c ft_atoi.c ft_isspace.c ft_calloc.c
SRC+=ft_strdup.c ft_memccpy.c ft_substr.c ft_strjoin.c ft_strtrim.c
SRC+=ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c
BONUS=ft_lstnew_bonus.c ft_lstadd_front.c
HEADER=libft.h
MAIN=main_test

###############################################################################
## RULES

all: $(NAME)
	@echo "\nDone ! .......\n"
#	@mv $(OBJ) $(OBJ_DIR)

$(NAME): $(OBJ)
	@echo "\nCreating Libft.a FILE .......\n"
	ar -rcs $(EXEC) $(OBJ)
	@echo "\nlinking FILES .......\n"
	cc $(OBJ) $(MAIN_OBJ).o -o $(NAME)
$(OBJ):
	@echo "\nCOMPILE all c files to .o FILES .......\n"
	$(CC) $(CFLAGS) $(CCOPTIONS) $(SRCS) -I./$(HEAD)
	$(CC) $(CFLAGS) $(CCOPTIONS) $(MAIN_SRC).c -I./$(HEAD) -o $(MAIN_OBJ).o

bonus:
	@echo "\nCOMPILE all c files to .o FILES .......\n"
	$(CC) $(CFLAGS) $(CCOPTIONS) $(SRCS) -I $(HEAD)
	$(CC) $(CFLAGS) $(CCOPTIONS) bonus_main.c -I./$(HEAD) -o $(MAIN_OBJ).o
	$(CC) $(CFLAGS) $(CCOPTIONS) $(BONUS_SRC) -I./$(HEAD)
	@echo "\nCreating Libft.a FILE .......\n"
	ar -rcs $(EXEC) $(OBJ) $(BONUS_OBJ)
	@echo "\nlinking FILES .......\n"
	cc $(OBJ) $(BONUS_OBJ) $(MAIN_OBJ).o -o $(NAME)
	@echo "\nDone ! avec bonus functions ......\n"
	
so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC) $(BONUS)
	gcc -nostartfiles -shared -o libft.so $(OBJ) $(BONUS)

clean:
	rm -f $(SRC_OBJ) $(MAIN_OBJ).o $(BONUS_OBJ)

fclean:clean
	@echo "\nFCLEAN all .o et .a files .......\n"
	rm -f $(NAME) $(MAIN).o	

re:fclean all
	@echo "\nAll erased and re compiled .......\n"

.PHONY: all clean fclean re bonus
