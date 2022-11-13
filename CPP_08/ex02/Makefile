# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/12 22:45:58 by lrandria          #+#    #+#              #
#    Updated: 2022/11/13 13:13:47 by lrandria         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= MutantStack

CC			= c++

FLAGS		= -Wall -Wextra -Werror -std=c++98

HDR			= colours.h			\
			  MutantStack.hpp	\

SRCS		= main.cpp			\

OBJS		= $(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o:		%.cpp $(HDR)
			$(CC) $(FLAGS) -c -o $@ $<

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re