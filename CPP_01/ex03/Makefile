NAME = weapon

FLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic

SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

HEADERS = HumanA.h HumanB.h Weapon.h

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) $(HEADERS)
			clang++ $(FLAGS) -o $(NAME) $(OBJS)

.cpp.o:
			clang++ $(FLAGS) -c $< -o $@
clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME)

re:		fclean all

.PHONY: all clean fclean re
