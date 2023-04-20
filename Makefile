NAME = libft.a
SOURCES =/
	ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_memset.c /
	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c /
	ft_isprint.c ft_tolower.c ft_toupper.c
OBJECTS = $(SOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) -r $@ $?

bonus: $(OBJECTS) $(BOBJECTS)
	$(AR) -r $(NAME) $?

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJECTS) $(BOBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re