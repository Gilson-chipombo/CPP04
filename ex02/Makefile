CXX = c++
CXXFLAGS =  -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = Abstract_class

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(OBJS) -o $(NAME)
clean:
	rm -f $(OBJS) $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all