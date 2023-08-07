# .SILENT :
NAME = brain

CPP = c++
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS =	src00/Animal.cpp src00/Cat.cpp src00/Dog.cpp \
				main.cpp Brain.cpp

INC = src00/Animal.hpp src00/Cat.hpp src00/Dog.hpp \
			Brain.hpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS) $(INC)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp  $(INC) 
	$(CPP)  $(CPPFLAGS) -o $@ -c $< 

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	
re: fclean $(NAME)

.PHONY: all clean fclean re