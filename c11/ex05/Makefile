NAME = do-op
FLAGS = -Wall -Wextra -Werror
FILES = $(wildcard *.c)

all: $(NAME)

$(NAME):$(FILES)
	cc $(FLAGS) $(FILES) -o $@

clean:
	rm -f $(NAME)

re: clean all
