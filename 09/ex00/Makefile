# .SILENT :
NAME = btc

CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror
SRCS = main.cpp BitcoinExchange.cpp
INC = BitcoinExchange.hpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS) $(INC)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	
re: fclean $(NAME)

.PHONY: all clean fclean re