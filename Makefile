##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## makefile that compiles a lib and more
##

CC 	=	gcc

SRC	=	lib/my_printf.c	\
		lib/my_put_nbr.c	\
		lib/my_putchar.c	\
		lib/my_putstr.c	\
		lib/str_to_array.c	\
		src/player.c	\
		src/moves.c	\
		src/moves2.c	\
		src/win_lose.c	\
		src/h_flag.c	\
		src/display_map.c	\
		src/ru_check_v2.c	\
		src/o_conditions.c	\
		src/error_handling.c	\
		src/main.c	\

NAME    =   my_sokoban

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra
LDFLAGS = -lncurses

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean $(NAME)
