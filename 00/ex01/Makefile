# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/09 00:43:32 by bshintak          #+#    #+#              #
#    Updated: 2023/03/01 16:30:40 by bshintak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# .SILENT :

NAME = phonebook

CPP = c++
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror
SRCS = main.cpp phonebook.cpp contacts.cpp
INC = contacts.hpp phonebook.hpp

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
