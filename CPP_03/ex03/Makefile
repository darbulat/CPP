NAME = a.out

FLAGS = -Wall -Werror -Wextra -Wshadow -Wno-shadow -std=c++98 -pedantic

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
			c++ $(FLAGS) -o $(NAME) $(OBJS)

.cpp.o:
			c++ $(FLAGS) -c $< -o $@
clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME)

re:		fclean all

.PHONY: all clean fclean re
