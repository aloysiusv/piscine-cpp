/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:24:17 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/03 09:59:34 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

/* ==========================================================================
								COPLIEN FORM 
   ========================================================================== */

Cat::Cat() : Animal("Cat") {

	std::cout << BLUE << type << " default constructor called!\n" RESET;
	_catBrain = new Brain;
}

Cat::Cat(Cat const &src) : Animal(src) {
	
	std::cout << BLUE << type << " copy constructor called!\n" RESET;
	_catBrain = new Brain(*src._catBrain);
}

Cat::~Cat() {
	
	std::cout << RED << type << " destructor called!\n" RESET;
	delete _catBrain;
}

Cat  &Cat::operator=(Cat const &rhs) {
	
	std::cout << BLUE << type << " assignment operator called!\n" RESET;
	if (this != &rhs)
		_catBrain = rhs._catBrain;
	return (*this);
}

/* ==========================================================================
								GETTERS-SETTERS 
   ========================================================================== */

Brain		*Cat::getCatBrain() const {
	return (_catBrain);
}

std::string	Cat::getOneThought() const {
	return (_catBrain->getRandIdea());
}

void		Cat::setThought(std::string thought) {
	_catBrain->setIdeas(thought);
}

/* ==========================================================================
								MEMBER FUNCTIONS 
   ========================================================================== */

void    Cat::makeSound() const {
	std::cout << getType() << " is meeEooOoOOOooowing\n";
}
