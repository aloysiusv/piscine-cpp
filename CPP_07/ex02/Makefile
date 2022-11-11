# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/09 16:42:54 by lrandria          #+#    #+#              #
#    Updated: 2022/11/10 21:50:58 by lrandria         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Array

CC			= c++

FLAGS		= -Wall -Wextra -Werror -std=c++98

HDR			= colours.h \
			  Array.tpp	\
			  Array.hpp	\

SRCS		= main.cpp	\

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