# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/09 16:42:30 by lrandria          #+#    #+#              #
#    Updated: 2022/11/09 16:42:32 by lrandria         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= somefunctionsforstarters

CC			= c++

FLAGS		= -Wall -Wextra -Werror -std=c++98

HDR			= whatever.hpp 		\

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
