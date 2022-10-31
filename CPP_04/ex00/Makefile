# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 18:06:10 by lrandria          #+#    #+#              #
#    Updated: 2022/10/31 18:07:58 by lrandria         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Polymorphism

CC			= c++

FLAGS		= -Wall -Wextra -Werror -std=c++98

HDR			= inc/colours.h			\
			  inc/Animal.hpp		\
			  inc/Cat.hpp			\
			  inc/Dog.hpp			\

SRCS		= srcs/Animal.cpp 		\
			  srcs/Cat.cpp 			\
			  srcs/Dog.cpp			\
			  srcs/main.cpp			\

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