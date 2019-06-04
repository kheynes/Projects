NAME = libft.a

SRC  = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
	   ft_memcmp.c ft_memchr.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	   ft_isdigit.c ft_isprint.c ft_putchar.c ft_putstr.c ft_strcmp.c \
	   ft_strcpy.c ft_strdup.c ft_strlen.c ft_strncmp.c ft_strcat.c \
	   ft_strncpy.c ft_tolower.c ft_toupper.c ft_strncat.c ft_strlcat.c \
	   ft_strchr.c

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRC)
	ar -rc $(NAME) *.o
	ranlib libft.a

clean:
	rm *.o

fclean:
	rm libft.a
	rm *.o

re: all
