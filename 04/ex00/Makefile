# .SILENT :
NAME = animal

CPP = c++
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror
SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp
INC = Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp

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