NAME = libft.a

SRC  = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_putchar.c ft_putstr.c ft_strcmp.c ft_strcpy.c ft_strdup.c \
		ft_strlen.c ft_strncmp.c ft_strncpy.c ft_tolower.c ft_toupper.c

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRC)
	ar -rc $(NAME) *.o
	ranlib libft.a

clean:
	rm *.o

fclean:
	rm libft.a
	clean

re: all
