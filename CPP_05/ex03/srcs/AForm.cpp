/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:10:25 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/04 00:29:19 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AForm.hpp"

/* ==========================================================================
								COPLIEN AFORM 
   ========================================================================== */

AForm::AForm(): _name("default"), 
			  _isSigned(false), 
			  _gradeToSign(150), 
			  _gradeToExec(150) {
	std::cout << BLUE << "default AForm construtor called" RESET;
}

AForm::AForm(std::string const name, int const toSign, int const toExec) : _name(name), 
													   					   _isSigned(false),
													   					   _gradeToSign(toSign),
													   					   _gradeToExec(toExec) {

	std::cout << BLUE <<  _name << " parameterised AForm constructor called!\n" RESET;
	if (_gradeToSign < MAXGRADE || _gradeToExec < MAXGRADE)
		throw AForm::GradeTooHighException();
	if (_gradeToSign > MINGRADE || _gradeToExec > MINGRADE)
		throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const &src) : _name(src._name),
							  _isSigned(src._isSigned),
							  _gradeToSign(src._gradeToSign),
							  _gradeToExec(src._gradeToExec) {
	
	std::cout << BLUE << _name << " AForm copy constructor called!\n" RESET;
	if (_gradeToSign < MAXGRADE || _gradeToExec < MAXGRADE)
		throw AForm::GradeTooHighException();
	if (_gradeToSign > MINGRADE || _gradeToExec > MINGRADE)
		throw AForm::GradeTooLowException();
	*this = src;
}

AForm::~AForm() {
	std::cout << RED << _name << " AForm destructor called!\n" RESET;
}

AForm				&AForm::operator=(AForm const &rhs) {
	
	std::cout << BLUE << _name << " AForm assignment operator called!\n" RESET;
	if (this != &rhs)
		_isSigned = rhs._isSigned;
	return (*this);
}

/* ==========================================================================
								GETTERS-SETTERS 
   ========================================================================== */

std::string	const	AForm::getName() const {
	return (_name);
}

bool				AForm::getIsSigned() const {
	return (_isSigned);
}

int					AForm::getGradeToSign() const {
	return (_gradeToSign);
}

int					AForm::getGradeToExec() const {
	return (_gradeToExec);
}

std::string			AForm::getTarget() const {
	return (_target);
}

void				AForm::setSigned(bool sign) {
	_isSigned = sign;
}

void				AForm::setTarget(std::string target) {
	_target = target;
}

/* ==========================================================================
								EXCEPTIONS 
   ========================================================================== */

char const			*AForm::GradeTooHighException::error() const throw() {
	return ("\e[0;38;5;166mException: grade is too high! :(\e[0m");
}

char const			*AForm::GradeTooLowException::error() const throw() {
	return ("\e[0;38;5;166mException: grade is too low! :(\e[0m");
}

char const			*AForm::BadExecRightsException::error() const throw() {
	return ("\e[0;38;5;166mException: exec grade is too low! :(\e[0m");
}

char const			*AForm::NotSignedException::error() const throw() {
	return ("\e[0;38;5;166mException: form has not been signed! :(\e[0m");
}

/* ==========================================================================
								MEMBER FUNCTIONS 
   ========================================================================== */

void				AForm::beSigned(Bureaucrat const &rhs) {

	if (rhs.getGrade() > _gradeToSign)
		throw AForm::GradeTooLowException();
	std::cout << rhs.getName() << " signed " << _name << std::endl;
	_isSigned = true;
}

/* ==========================================================================
								OVERLOADS 
   ========================================================================== */

std::ostream		&operator<<(std::ostream &out, AForm const &rhs) {

	out << "Form name: " << rhs.getName() << std::endl
		<< "Is it signed? " << rhs.getIsSigned() << std::endl
		<< "Required grade to sign: " << rhs.getGradeToSign() << std::endl
		<< "Required grade to execute: " << rhs.getGradeToExec() << std::endl
		<< "Target: " << rhs.getTarget() << std::endl;
	return (out);
}
