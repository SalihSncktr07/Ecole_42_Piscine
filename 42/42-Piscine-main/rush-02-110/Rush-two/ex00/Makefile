SRC		=	*.c
CC 		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
NAME	=	rush-02
OBJS	=	${SRC:.c=.o}

$(NAME):
		gcc $(FLAGS) -o $(NAME) $(SRC)
clean:
		rm -f ${OBJS}
fclean:	clean
		rm -f ${NAME}