NAME = libftprintf.a
SOURCES = ft_putchar.c ft_putadress.c ft_putstr.c ft_itoa.c ft_printf.c ft_puthex.c ft_put_unsigned_int.c ft_strlen.c

OBJECTS = $(SOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $@ $(OBJECTS)

%.o: %.c ft_printf.h
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
