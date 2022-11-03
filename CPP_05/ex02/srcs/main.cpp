/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:33:48 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/04 00:27:02 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"

void	testLeaks() {

	AForm	*shrub = new ShrubberyCreationForm("SHRUB");
	AForm	*robot = new RobotomyRequestForm("ROBOT");
	AForm	*prez = new PresidentialPardonForm("PREZ");

	std::cout << "Current: " << *shrub
			  << "Current: " << *robot
			  << "Current: " << *prez;
	delete shrub;
	delete robot;
	delete prez;
}

void	testPPardon() {

	Bureaucrat					nina("Nina", 3);
	PresidentialPardonForm		ppardon("It's Okay");

	std::cout << "Current: " << ppardon
			  << "Current: " << nina;
	std::cout << H_YELLOW "================Let's test unsigned!================\n" RESET;
	try {
		nina.executeForm(ppardon);
	}
	catch (const std::exception &e) {
			std::cerr << "Nina trying to execute: " << e.what() << std::endl;
	}
	std::cout << H_YELLOW "================Let's test grade too low to exec!================\n" RESET;
	try {
		ppardon.setSigned(true);
		for (uint i = 0; i < 43; i++)
			nina.gradeDown();
		nina.executeForm(ppardon);
	}
	catch (const std::exception &e) {
			std::cerr << "Nina trying to execute:" << e.what() << std::endl;
	}
}


void	testRobotomy() {

	Bureaucrat				george("George", 3);
	RobotomyRequestForm		robot("Garden");

	std::cout << "Current: " << robot << std::endl
			  << "Current: " << george << std::endl;
	std::cout << H_YELLOW "================Let's test unsigned!================\n" RESET;
	try {
		george.executeForm(robot);
	}
	catch(const std::exception &e) {
		std::cerr << "George trying to execute:" << e.what() << std::endl;
	}
	std::cout << H_YELLOW "================Let's test grade too low to exec!================\n" RESET;
	try {
		robot.setSigned(true);
		for (uint i = 0; i < 43; i++)
			george.gradeDown();
		george.executeForm(robot);
	}
	catch(const std::exception &e) {
			std::cerr << "George trying to execute:" << e.what() << std::endl;
	}
}

void	testShrubbery() {

	Bureaucrat				groot("Groot", 3);
	ShrubberyCreationForm	shrub("Garden");

	std::cout << "Current: " << shrub
			  << "Current: " << groot;
	std::cout << H_YELLOW "================Let's test unsigned!================\n" RESET;
	try {
		groot.executeForm(shrub);
	}
	catch(const std::exception &e) {
		std::cerr << "Groot trying to execute:" << e.what() << std::endl;
	}
	std::cout << H_YELLOW "================Let's test grade too low to exec!================\n" RESET;
	try {
		shrub.setSigned(true);
		for (uint i = 0; i < 135; i++)
			groot.gradeDown();
		groot.executeForm(shrub);
	}
	catch(const std::exception &e) {
		std::cerr << "Groot trying to execute:" << e.what() << std::endl;
	}
}

int main(void) {

	Bureaucrat				clark("Clark", 3);
	ShrubberyCreationForm	shrub("Garden");
	RobotomyRequestForm		robot("Robotic");
	PresidentialPardonForm	prez("P.Pardon");

	std::cout << "Current: " << clark
			  << "Current: " << shrub
			  << "Current: " << robot
			  << "Current: " << prez;
	shrub.setSigned(true);
	robot.setSigned(true);
	prez.setSigned(true);
	clark.executeForm(shrub);
	shrub.execute(clark);
	clark.executeForm(robot);
	clark.executeForm(prez);
	testShrubbery();
	testRobotomy();
	testPPardon();
	testLeaks();
	return (EXIT_SUCCESS);
}
 