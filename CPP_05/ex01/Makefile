# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 16:58:26 by lrandria          #+#    #+#              #
#    Updated: 2022/11/03 11:19:00 by lrandria         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	lineupyouslimyworms

CC			=	c++

FLAGS		=	-Wall -Wextra -Werror -MMD -MP -std=c++98

INC			=	inc/colours.h 			\
				inc/Bureaucrat.hpp		\
				inc/Form.hpp			\

SRCS		=	main.cpp 				\
				Bureaucrat.cpp			\
				Form.cpp				\

OBJS		:=	$(addprefix ./objs/,$(SRCS:%.cpp=%.o))
DEP			=	$(addprefix ./objs/,$(OBJS:%.o=%.d))

all:			$(NAME)

-include $(DEP)

./objs/%.o: 	./srcs/%.cpp
				@mkdir -p $(@D)
				$(CC) $(FLAGS) -o $@ -c $<

$(NAME):		$(OBJS) $(INC)
				$(CC) $(FLAGS) -I incl -o $(NAME) $(OBJS)

clean:
				rm -rf objs/

fclean:			clean
				rm -rf $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
