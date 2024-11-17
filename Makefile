CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRC = 	ft_printf.c		ft_subprint.c	ft_character.c \
		ft_lowerhex.c	ft_unsigned.c	ft_decint.c	\
		ft_pointer.c	ft_string.c		ft_upperhex.c	ft_strlen.c
OBJ =	${SRC:.c=.o}

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

.SECONDARY: $(OBJ)