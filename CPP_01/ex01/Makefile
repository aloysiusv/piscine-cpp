# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/14 09:52:47 by lrandria          #+#    #+#              #
#    Updated: 2022/10/11 16:17:01 by lrandria         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= mOore_braiiiiiiinnnzzzZ

CC			= c++

FLAGS		= -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3

HDR			= Zombie.hpp			\
			  colours.h				\

SRCS		= Zombie.cpp 			\
			  zombieHorde.cpp		\
			  main.cpp				\

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