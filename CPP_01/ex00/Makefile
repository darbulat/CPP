NAME = zombies

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
HEADERS = Zombie.h

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
