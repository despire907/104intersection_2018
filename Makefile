CC	= gcc -g -lm

RM	= rm -f

NAME	= 104intersection

SRC	=   intersection.c \
        main.c  \
        core.c

OBJ	= $(addprefix source/,$(SRC:.c=.o))

CFLAGS	= -fno-builtin -W -Wextra -Wall -I include/

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

all:	$(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
