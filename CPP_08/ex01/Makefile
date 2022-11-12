# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 15:32:30 by lrandria          #+#    #+#              #
#    Updated: 2022/11/12 21:05:47 by lrandria         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Span

CC			= c++

FLAGS		= -Wall -Wextra -Werror -std=c++98

HDR			= colours.h	\
			  Span.hpp	\

SRCS		= main.cpp	\
			  Span.cpp	\

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