/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:33:48 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/04 00:29:33 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/Intern.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"

int main(void) {

	Intern		JeanBon;
	AForm		*form1;
	AForm		*form2;
	AForm		*form3;

	form1 = JeanBon.makeForm("shrubbery creation", "Garden");
	try {
		form2 = JeanBon.makeForm("robobobobotomy", "HAL");
	}
	catch (const std::exception &e) {
		std::cerr << "JeanBon tried to make a form: " << e.what() << std::endl;	
	}
	form3 = JeanBon.makeForm("presidential pardon", "");

	std::cout << *form1 << std::endl
			  << *form2 << std::endl
			  << *form3 << std::endl;
	delete form1;
	return (EXIT_SUCCESS);
}
 