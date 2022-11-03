/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:45:23 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/03 23:04:23 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PresidentialPardonForm.hpp"

/* ==========================================================================
								COPLIEN FORM 
   ========================================================================== */

PresidentialPardonForm::PresidentialPardonForm() :  AForm("PrezForm", 25, 5) {
	
	setTarget("default");
	std::cout << BLUE <<  "PresidentialPardonForm default constructor called!\n" RESET;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PrezForm", 25, 5) {
	
	setTarget(target);
	std::cout << BLUE << "PresidentialPardonForm parameterised Constructor called!\n" << RESET;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : AForm(src) {
	std::cout << BLUE << "PresidentialPardonForm copy constructor called!\n" << RESET;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << RED << " PresidentialPardonForm destructor called!\n" RESET;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) {
	
	std::cout << BLUE << " PresidentialPardonForm assignment operator called!\n" RESET;
	if (this != &rhs) {

		setSigned(rhs.getIsSigned());
		setTarget(rhs.getTarget());
	}
	return (*this);
}

/* ==========================================================================
								MEMBER FUNCTIONS 
   ========================================================================== */

void					PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	
	if (getIsSigned() == false)
		throw AForm::NotSignedException();
	else if (executor.getGrade() > getGradeToExec())
		throw AForm::BadExecRightsException();
	std::cout << getTarget() << " has been forgiven by Zaphod Beeblebrox.\n";
}
