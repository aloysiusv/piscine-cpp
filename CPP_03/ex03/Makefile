# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: SvenSvn <SvenSvn@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/14 09:52:47 by lrandria          #+#    #+#              #
#    Updated: 2022/10/30 08:09:28 by SvenSvn          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= DiamondTrap

CC			= c++

FLAGS		= -Wall -Wextra -Werror -std=c++98

HDR			= colours.h			\
			  ClapTrap.hpp		\
			  ScavTrap.hpp		\
			  FragTrap.hpp		\
			  DiamondTrap.hpp	\

SRCS		= ClapTrap.cpp 		\
			  ScavTrap.cpp 		\
			  FragTrap.cpp		\
			  DiamondTrap.cpp	\
			  main.cpp			\

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