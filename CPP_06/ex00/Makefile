# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 13:36:23 by lrandria          #+#    #+#              #
#    Updated: 2022/11/08 20:32:24 by lrandria         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ScalarConversion

CC			= c++

FLAGS		= -Wall -Wextra -Werror -std=c++98

HDR			= colours.h 		\
			  conversion.hpp 	\

SRCS		= main.cpp			\
			  conversion.cpp	\
			  getType.cpp		\

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
