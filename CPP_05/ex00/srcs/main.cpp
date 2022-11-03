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

void	testTooHigh() {

	try {
		Bureaucrat	ursula("Ursula", -8);
	}
	catch (Bureaucrat::GradeTooHighException &e) {
		std::cerr << "Building Ursula: " << e.error() << std::endl;
	}

	try {
		Bureaucrat	angela("Angela", 1);

		angela.gradeUp();
	}
	catch (Bureaucrat::GradeTooHighException &e) {
		std::cerr << "Promoting Angela: " << e.error() << std::endl;
	}
}

void	testTooLow() {

	try {
		Bureaucrat	elon("Elon", 287);
	}
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cerr << "Building Elon: " << e.error() << std::endl;
	}

	try {
		Bureaucrat	jeff("Jeff", 150);

		jeff.gradeDown();
	}
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cerr << "Demoting Jeff: " << e.error() << std::endl;
	}
}

int main(void) {

	std::cout << "*******TESTING NORMAL STUFF********\n";

	Bureaucrat	you("You", 23);

	std::cout << "Current: " << you << std::endl;
	you.gradeUp();
	std::cout << "After promotion: " << you << std::endl;
	you.gradeDown();
	you.gradeDown();
	you.gradeDown();
	std::cout << "After three demotions: " << you << std::endl;

	std::cout << "*******TESTING EXCEPTIONS********\n";

	testTooLow();
	testTooHigh();
	return (EXIT_SUCCESS);
}
