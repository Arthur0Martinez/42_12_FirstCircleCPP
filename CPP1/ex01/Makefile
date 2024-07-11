CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = C01ex01

SRCS = main.cpp Zombie.cpp zombieHorde.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm $(NAME)

re: fclean all
