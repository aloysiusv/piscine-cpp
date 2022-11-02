/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:20:35 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/02 12:49:50 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150) {
	std::cout << BLUE << _name << " Bureaucrat constructor called!\n" RESET;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {

	std::cout << BLUE <<  _name << "Bureaucrat parameterised constructor called!\n" RESET;
	if (grade < MAXGRADE)
		throw Bureaucrat::_GradeTooHighException();
	else if (grade > MINGRADE)
		throw Bureaucrat::_GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) {
	
	std::cout << BLUE << _name << " Bureaucrat copy constructor called!\n" RESET;
	*this = src;
}

Bureaucrat::~Bureaucrat() {
	std::cout << RED << _name << " Bureaucrat destructor called!\n" RESET;
}

Bureaucrat			&Bureaucrat::operator=(Bureaucrat const &rhs) {
	
	std::cout << BLUE << _name << " Bureaucrat assignment operator called!\n" RESET;
	_grade = rhs._grade;
	return (*this);
}

std::string const	Bureaucrat::getName() const {
	return (_name);
}

int					Bureaucrat::getGrade() const {
	return (_grade);
}

char const			*Bureaucrat::_GradeTooHighException::what() const throw() {
	return ("\e[0;38;5;166mException: grade is too high! :(\e[0m");
}

char const			*Bureaucrat::_GradeTooLowException::what() const throw() {
	return ("\e[0;38;5;166mException: grade is too low! :(\e[0m");
}

void				Bureaucrat::gradeUp() {

	if (_grade <= MAXGRADE)
		throw Bureaucrat::_GradeTooHighException();
	_grade--;
}

void				Bureaucrat::gradeDown() {

	if (_grade >= MINGRADE)
		throw Bureaucrat::_GradeTooLowException();
	_grade++;
}

std::ostream		&operator<<(std::ostream &out, Bureaucrat const &rhs) {

	out << rhs.getName() << ", bureaucrat grade: " << rhs.getGrade() << std::endl;
	return (out);
}

