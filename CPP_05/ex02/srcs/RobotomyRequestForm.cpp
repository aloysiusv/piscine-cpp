/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:58:09 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/03 23:05:48 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RobotomyRequestForm.hpp"

/* ==========================================================================
								COPLIEN FORM 
   ========================================================================== */

RobotomyRequestForm::RobotomyRequestForm() :  AForm("RobotForm", 72, 45) {
	
	setTarget("default");
	std::cout << BLUE <<  "RobotomyRequestForm default constructor called!\n" RESET;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotForm", 72, 45) {
	
	setTarget(target);
	std::cout << BLUE << "RobotomyRequestForm parameterised Constructor called!\n" << RESET;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm(src) {
	std::cout << BLUE << "RobotomyRequestForm copy constructor called!\n" << RESET;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << RED << " RobotomyRequestForm destructor called!\n" RESET;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) {
	
	std::cout << BLUE << " RobotomyRequestForm assignment operator called!\n" RESET;
	if (this != &rhs) {

		setSigned(rhs.getIsSigned());
		setTarget(rhs.getTarget());
	}
	return (*this);
}

/* ==========================================================================
								MEMBER FUNCTIONS
   ========================================================================== */

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	
	if (getIsSigned() == false)
		throw AForm::NotSignedException();
	else if (executor.getGrade() > getGradeToExec())
		throw AForm::BadExecRightsException();
	std::cout << "* DDDDDDDDDZZZZZZZZZZZZZZZZZZZZZZZZZzzzzzzzZzZZzzz *";
	srand(time(NULL));
	if (rand() % 2)
		std::cout << getTarget() << " has been successfully robotomised!\n";
	else
		std::cout << "We failed to robotomise " << getTarget() << ".\n";
}