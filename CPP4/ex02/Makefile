CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = C04ex02

SRCS = main.cpp AAnimal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	-rm -f $(NAME)

re: fclean all
