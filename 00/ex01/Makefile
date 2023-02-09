# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/09 00:43:32 by bshintak          #+#    #+#              #
#    Updated: 2023/02/09 00:47:36 by bshintak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= phonebook

CPP		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -f

SRCS	= phonebook.cpp
OBJS	= $(SRCS: .cpp=.o)

%.o: %.cpp
	$(CPP) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re