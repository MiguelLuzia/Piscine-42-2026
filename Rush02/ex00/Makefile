NAME = rush-02

CC = cc
FLAGS = -Wall -Wextra -Werror
PPFLAGS = -Iincludes

SRCS = $(wildcard src/*.c)
OBJS = $(SRCS:.c=.o)
HEADER = includes/header.h

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

src/%.o: src/%.c $(HEADER)
	$(CC) $(FLAGS) $(PPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
