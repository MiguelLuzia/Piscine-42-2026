FLAGS = -Wall -Wextra -Werror
FILES = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJECTS = $(FILES:.c=.o)
HEADER = includes/ft.h

all: libft.a

libft.a: $(OBJECTS)
	ar rc libft.a $(OBJECTS)
	ranlib libft.a

srcs/%.o: srcs/%.c $(HEADER)
	cc $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)
fclean: clean
	rm -f libft.a
re: fclean all

.PHONY: all clean fclean re
