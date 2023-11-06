###############################################################################
## ARGUMENTS

NAME=output
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

SRC_DIR=srcs/
OBJ_DIR=objs/
INCLUDE=../includes/
SRC=ft_putchar.c ft_putstr.c ft_display_file.c ft_putchar_fd.c
SRC+=ft_putstr_fd.c
HEADER=libft.h
MAIN=main

###############################################################################
## RULES

all: $(NAME)
	@mv $(OBJ) $(OBJ_DIR)
	@echo "\nDone ! .......\n"

$(NAME): $(OBJ)
	@echo "\nlinking FILES .......\n"
	cc $(OBJ) $(MAIN_OBJ).o -o $(NAME)

$(OBJ):
	@echo "\nCOMPILE all c files to .o FILES .......\n"
	$(CC) $(CFLAGS) -c $(SRCS) -I $(HEAD)
	$(CC) $(CFLAGS) -c $(MAIN_SRC).c -I$(HEAD) -o $(MAIN_OBJ).o

clean:
	rm -f $(SRC_OBJ) $(MAIN_OBJ).o

fclean:clean
	@echo "\nFCLEAN all .o et .a files .......\n"
	rm -f $(NAME) main.o	

re:fclean all
	@echo "\nAll erased and re compiled .......\n"

.PHONY: all clean fclean re 
