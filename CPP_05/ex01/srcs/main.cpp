/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:33:48 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/03 12:19:27 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

void	testSign() {

	Bureaucrat	jeff("Jeff", 4);
	Form		apl("APL", 12, 6);

	std::cout << "Current: " << jeff << std::endl;
	std::cout << "Current: " << apl << std::endl;
	jeff.signForm(apl);
	apl.setSigned();
	std::cout << "After manually setting signed: " << apl << std::endl;
	jeff.signForm(apl);
}

void	testTooLow() {

	try {
		Bureaucrat	elon("Elon", 89);
		Form		apl("APL", 12, 6);

		std::cout << "Current: " << elon << std::endl;
		std::cout << "Current: " << apl << std::endl;
		apl.beSigned(elon);
	}
	catch (Form::GradeTooLowException &e) {
		std::cerr << "Elon trying to sign: " << e.error() << std::endl;
	}
}

int main(void) {

	std::cout << "*******TESTING NORMAL STUFF********\n";

	Bureaucrat	you("You", 23);
	Form		form("APL", 100, 75);

	std::cout << "Current: " << you
			  << "Current: " << form << std::endl;
	form.beSigned(you);
	std::cout << "After signing: " << form << std::endl;
	
	std::cout << "*******TESTING EXCEPTIONS********\n";
	testTooLow();
	std::cout << "*******TESTING SIGNATURE********\n";
	testSign();
	return (EXIT_SUCCESS);
}
