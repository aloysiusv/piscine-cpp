# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 15:42:04 by lrandria          #+#    #+#              #
#    Updated: 2022/11/04 00:20:56 by lrandria         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	stillbetterthanmakingcoffee

CC			=	c++

FLAGS		=	-Wall -Wextra -Werror -MMD -MP -std=c++98

INC			=	inc/colours.h 					\
				inc/AForm.hpp					\
				inc/Bureaucrat.hpp				\
				inc/ShrubberyCreationForm.hpp	\
				inc/RobotomyRequestForm.hpp		\
				inc/PresidentialPardonForm.hpp	\
				inc/Intern.hpp					\


SRCS		=	main.cpp 						\
				AForm.cpp						\
				Bureaucrat.cpp					\
				ShrubberyCreationForm.cpp		\
				RobotomyRequestForm.cpp			\
				PresidentialPardonForm.cpp		\
				Intern.cpp						\

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
