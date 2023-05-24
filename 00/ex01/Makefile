# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/09 00:43:32 by bshintak          #+#    #+#              #
#    Updated: 2023/05/24 12:44:03 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# .SILENT :

NAME = phonebook

CPP = c++
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror
SRCS = Main.cpp PhoneBook.cpp Contacts.cpp
INC = Contacts.hpp PhoneBook.hpp

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
