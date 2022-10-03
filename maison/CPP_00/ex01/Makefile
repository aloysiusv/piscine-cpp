# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/14 09:52:47 by lrandria          #+#    #+#              #
#    Updated: 2022/10/02 18:04:20 by lrandria         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= phonebook

CC			= c++

FLAGS		= -Wall -Wextra -Werror -std=c++98

HDR			= PhoneBook.hpp			\
			  Contact.hpp			\
			  colours.h				\

SRCS		= PhoneBook.cpp 		\
			  Contact.cpp			\
			  main.cpp				\

OBJS		= $(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o:		%.cpp $(HDR)
			$(CC) $(CFLAGS) -c -o $@ $<

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re