/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:36:07 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/02 15:34:58 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Form.hpp"

/* ==========================================================================
								COPLIEN FORM 
   ========================================================================== */

Form::Form(): _name("default"), 
			  _isSigned(false), 
			  _gradeToSign(150), 
			  _gradeToExec(150) {
	std::cout << BLUE << "default Form Construtor called" RESET;
}

Form::Form(std::string name, int toSign, int toExec) : _name(name), 
													   _isSigned(0),
													   _gradeToSign(toSign),
													   _gradeToExec(toExec) {

	std::cout << BLUE <<  _name << " parameterised Form constructor called!\n" RESET;
	if (_gradeToSign < MAXGRADE || _gradeToExec < MAXGRADE)
		throw Form::_GradeTooHighException();
	if (_gradeToSign > MINGRADE || _gradeToExec > MINGRADE)
		throw Form::_GradeTooLowException();
}

Form::Form(Form const &src) : _name(src._name),
							  _isSigned(src._isSigned),
							  _gradeToSign(src._gradeToSign),
							  _gradeToExec(src._gradeToExec) {
	
	std::cout << BLUE << _name << " Form copy constructor called!\n" RESET;
	if (_gradeToSign < MAXGRADE || _gradeToExec < MAXGRADE)
		throw Form::_GradeTooHighException();
	if (_gradeToSign > MINGRADE || _gradeToExec > MINGRADE)
		throw Form::_GradeTooLowException();
	*this = src;
}

Form::~Form() {
	std::cout << RED << _name << " Form destructor called!\n" RESET;
}

Form				&Form::operator=(Form const &rhs) {
	
	std::cout << BLUE << _name << " Form assignment operator called!\n" RESET;
	_isSigned = rhs._isSigned;
	return (*this);
}

/* ==========================================================================
								GETTERS-SETTERS 
   ========================================================================== */

std::string	const	Form::getName() const {
	return (_name);
}

bool				Form::getIsSigned() const {
	return (_isSigned);
}

int					Form::getGradeToSign() const {
	return (_gradeToSign);
}

int					Form::getGradeToExec() const {
	return (_gradeToExec);
}

void				Form::setSigned() {
	_isSigned = true;
}

/* ==========================================================================
								EXCEPTIONS 
   ========================================================================== */

char const			*Form::_GradeTooHighException::what() const throw() {
	return (ORANGE"Exception: Form: grade is too high! :("RESET);
}

char const			*Form::_GradeTooLowException::what() const throw() {
	return (ORANGE"Exception: Form: grade is too low! :("RESET);
}

/* ==========================================================================
								MEMBER FUNCTIONS 
   ========================================================================== */

void				Form::beSigned(Bureaucrat const &target) {

	if (target.getGrade() > _gradeToSign)
		throw Form::_GradeTooLowException();
	std::cout << target.getName() << " signed " << _name << std::endl;
	_isSigned = true;
}

/* ==========================================================================
								OVERLOADS 
   ========================================================================== */

std::ostream		&operator<<(std::ostream &out, Form const &rhs) {

	out << "Form name: " << rhs.getName() << std::endl
		<< "Is it signed? " << rhs.getIsSigned() << std::endl
		<< "Required grade to sign: " << rhs.getGradeToSign() << std::endl
		<< "Required grade to execute: " << rhs.getGradeToExec() << std::endl;
	return (out);
}
