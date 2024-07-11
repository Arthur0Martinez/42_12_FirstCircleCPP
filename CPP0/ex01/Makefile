CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = PhoneBook

SRCS = Contact.cpp main.cpp PhoneBook.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm $(NAME)
