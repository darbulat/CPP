NAME = replace

FLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic

SRCS = main.cpp Replace.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
			clang++ $(FLAGS) -o $(NAME) $(OBJS)

.cpp.o:
			clang++ $(FLAGS) -c $< -o $@
clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME)

re:		fclean all

.PHONY: all clean fclean re
