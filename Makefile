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
		player.c	\
		moves.c	\
		moves2.c	\
		win_lose.c	\
		h_flag.c	\
		display_map.c	\
		ru_check_v2.c	\
		o_conditions.c	\
		error_handling.c	\
		main.c	\

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
