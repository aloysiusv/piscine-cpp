# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 18:08:55 by lrandria          #+#    #+#              #
#    Updated: 2022/10/20 23:31:48 by lrandria         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= fixed2.0

CC			= c++

FLAGS		= -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3

HDR			= colours.h				\
			  Fixed.hpp				\

SRCS		= main.cpp	 			\
			  Fixed.cpp				\
			  ConstrDestr.cpp 		\
			  ArithmeticSigns.cpp	\
			  Comparators.cpp		\
			  InDeCrementation.cpp	\
			  MinMax.cpp			\

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