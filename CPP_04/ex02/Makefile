# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 10:26:46 by lrandria          #+#    #+#              #
#    Updated: 2022/11/03 10:34:20 by lrandria         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	abstractclass

CC			=	c++

FLAGS		=	-Wall -Wextra -Werror -MMD -MP -std=c++98

INC			=	inc/colours.h 			\
				inc/AAnimal.hpp			\
				inc/Cat.hpp				\
				inc/Dog.hpp				\
				inc/AWrongAnimal.hpp	\
				inc/WrongCat.hpp		\
				inc/Brain.hpp			\

SRCS		=	main.cpp 				\
				AAnimal.cpp				\
				Cat.cpp					\
				Dog.cpp					\
				AWrongAnimal.cpp		\
				WrongCat.cpp			\
				Brain.cpp				\

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
