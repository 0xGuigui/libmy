##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## makefile for whatever
##

SRC     =    whatever

OBJ     =    $(SRC:.c=.o)

NAME    =    whatever

CFLAGS    =    -lm -L./lib -lmy -I./include

all:    $(NAME)

$(NAME):    $(OBJ)
    make -C lib/my
    gcc $(OBJ) -o $(NAME) $(CFLAGS)

debug:
    make -C lib/my
    gcc $(SRC) lib/my/*.c -g -o $(NAME) $(CFLAGS)

clean:
    rm -f $(OBJ)

fclean:clean
    rm -f $(NAME)

re:    fclean all