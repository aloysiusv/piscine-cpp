# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 15:42:04 by lrandria          #+#    #+#              #
#    Updated: 2022/11/02 15:43:47 by lrandria         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ohbutyouneed28bnot28c

CC			=	c++

FLAGS		=	-Wall -Wextra -Werror -MMD -MP -g3

INC			=	inc/colours.h 					\
				inc/Bureaucrat.hpp				\
				inc/Form.hpp					\
				inc/ShrubberyCreationForm.hpp	\
				inc/RobotomyCreationForm.hpp	\
				inc/PresidentialPardonForm.hpp	\


SRCS		=	main.cpp 						\
				Bureaucrat.cpp					\
				Form.cpp						\
				ShrubberyCreationForm.cpp		\
				RobotomyCreationForm.cpp		\
				PresidentialPardonForm.cpp		\

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
