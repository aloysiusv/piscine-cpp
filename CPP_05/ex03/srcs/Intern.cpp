/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 23:48:33 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/04 00:20:12 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Intern.hpp"

/* ==========================================================================
								COPLIEN FORM
   ========================================================================== */

Intern::Intern() {
	std::cout << BLUE "Intern default constructor called!\n" RESET;
}

Intern::Intern(Intern const &src) {
	
	std::cout << BLUE "Intern copy constructor called!\n" RESET;
	(void)src;
}

Intern::~Intern() {
	std::cout << RED "Intern destructor called!\n" RESET;
}

Intern& Intern::operator=(Intern const &src) {
	
	std::cout << BLUE "Intern assignment operator called!\n" RESET;
	(void)src;
	return (*this);
}

/* ==========================================================================
								EXCEPTIONS 
   ========================================================================== */

char const			*Intern::FormNotFoundException::error() const throw() {
	return ("\e[0;38;5;166mException 404: form not found! :(\e[0m");
}

/* ==========================================================================
								MEMBER FUNCTIONS 
   ========================================================================== */

AForm	*Intern::makeForm(std::string formName, std::string target) {

	std::string const	_tabForms[3] = {"shrubbery creation", 
										"robotomy request",
										"presidential pardon"};
	uint i;
	
	for (i = 0; i < 3; i++)
		if (_tabForms[i] == formName)
			break ;
	switch (i) {
		case 0:
			std::cout << "Intern creates a " << _tabForms[i] << std::endl;
			return (new ShrubberyCreationForm(target));
		case 1:
			std::cout << "Intern creates a " << _tabForms[i] << std::endl;
			return (new RobotomyRequestForm(target));
		case 2:
			std::cout << "Intern creates a " << _tabForms[i] << std::endl;
			return (new PresidentialPardonForm(target));
		default:
			throw Intern::FormNotFoundException();
			return (NULL);
	}
}
