/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:45:37 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/03 23:04:39 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ShrubberyCreationForm.hpp"

/* ==========================================================================
								COPLIEN FORM 
   ========================================================================== */

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubForm", 145, 137) {

	setTarget("default");
	std::cout << BLUE <<  "ShrubberyCreationForm default constructor called!\n" RESET;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubForm", 145, 137) {

	setTarget(target);
	std::cout << BLUE << "ShrubberyCreationForm parameterised Constructor called!\n" << RESET;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm(src) {
	std::cout << BLUE << "ShrubberyCreationForm copy constructor called!\n" << RESET;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << RED << " ShrubberyCreationForm destructor called!\n" RESET;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) {
	
	std::cout << BLUE << " ShrubberyCreationForm assignment operator called!\n" RESET;
	if (this != &rhs) {

		setSigned(rhs.getIsSigned());
		setTarget(rhs.getTarget());
	}
	return (*this);
}

/* ==========================================================================
								MEMBER FUNCTIONS
   ========================================================================== */

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	
	std::ofstream	file;
	
	if (getIsSigned() == false)
		throw AForm::NotSignedException();
	else if (executor.getGrade() > getGradeToExec())
		throw AForm::BadExecRightsException();
	file.open((getTarget() + "_shrubbery").c_str());
	if (!file.is_open())
		throw std::ios::failure("error: can't open file.\n");
	file << "        ###         *       " << std::endl
    	 << "  *   #o###                " << std::endl
    	 << "    #####o###      o   *   " << std::endl
     	 << "   #o#########   ####      " << std::endl
     	 << "    #######o#  #o######    " << std::endl
     	 << "  *    }|{     #####o###   " << std::endl
     	 << "       }|{        }|{      " << std::endl
     	 << std::endl;
	file.close();
}