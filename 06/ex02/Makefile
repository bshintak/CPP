# .SILENT :
NAME = base

CPP = c++
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror
SRCS = main.cpp generate.cpp identify.cpp
INC = Base.hpp A.hpp B.hpp C.hpp GenerateAndIdentyfy.hpp

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