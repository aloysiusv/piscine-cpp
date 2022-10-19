# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/11 16:42:16 by lrandria          #+#    #+#              #
#    Updated: 2022/10/19 09:12:13 by lrandria         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= sedisforlosers

CC			= c++

FLAGS		= -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3

HDR			= colours.h		\
			  MyReplace.hpp \

SRCS		= main.cpp	 	\
			  MyReplace.cpp \

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