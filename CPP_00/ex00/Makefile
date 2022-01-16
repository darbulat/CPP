NAME = megaphone

FLAGS = -Wall -Werror -Wextra

SRCS = megaphone.cpp

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

test1:
	./megaphone "shhhhh... I think the students are asleep..."

test2:
	./megaphone Damnit " ! " "Sorry students, I thought this thing was off."

test3:
	./megaphone

.PHONY: all clean fclean re test
