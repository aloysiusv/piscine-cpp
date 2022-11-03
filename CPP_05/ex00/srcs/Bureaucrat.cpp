/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:20:35 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/03 12:18:43 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

/* ==========================================================================
								COPLIEN FORM 
   ========================================================================== */

Bureaucrat::Bureaucrat() : _name("default"), _grade(150) {
	std::cout << BLUE << _name << " Bureaucrat constructor called!\n" RESET;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {

	std::cout << BLUE <<  _name << " Bureaucrat parameterised constructor called!\n" RESET;
	if (grade < MAXGRADE)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > MINGRADE)
		throw Bureaucrat::GradeTooLowException();
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
	if (this != &rhs)
		_grade = rhs._grade;
	return (*this);
}

/* ==========================================================================
								GETTERS-SETTERS 
   ========================================================================== */

std::string const	Bureaucrat::getName() const {
	return (_name);
}

int					Bureaucrat::getGrade() const {
	return (_grade);
}

/* ==========================================================================
								EXCEPTIONS 
   ========================================================================== */

char const			*Bureaucrat::GradeTooHighException::error() const throw() {
	return ("\e[0;38;5;166mException: grade is too high! :(\e[0m");
}

char const			*Bureaucrat::GradeTooLowException::error() const throw() {
	return ("\e[0;38;5;166mException: grade is too low! :(\e[0m");
}

/* ==========================================================================
								MEMBER FUNCTIONS 
   ========================================================================== */

void				Bureaucrat::gradeUp() {

	if (_grade <= MAXGRADE)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void				Bureaucrat::gradeDown() {

	if (_grade >= MINGRADE)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

/* ==========================================================================
								OVERLOADS 
   ========================================================================== */

std::ostream		&operator<<(std::ostream &out, Bureaucrat const &rhs) {

	out << rhs.getName() << ", bureaucrat grade: " << rhs.getGrade() << std::endl;
	return (out);
}
