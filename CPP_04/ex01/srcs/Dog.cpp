/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:31:49 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/03 10:27:21 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

/* ==========================================================================
								COPLIEN FORM 
   ========================================================================== */

Dog::Dog() : Animal("Dog") {

	_dogBrain = new Brain;
	std::cout << BLUE << type << " default constructor called!\n" RESET;
}

Dog::Dog(Dog const &src) : Animal(src) {
	
	std::cout << BLUE << type << " copy constructor called!\n" RESET;
	_dogBrain = new Brain(*src._dogBrain);
}

Dog::~Dog() {

	delete _dogBrain;
	std::cout << RED << type << " destructor called!\n" RESET;
}

Dog  &Dog::operator=(Dog const &rhs) {
	
	std::cout << BLUE << type << " assignment operator called!\n" RESET;
	 if (this != &rhs)
		_dogBrain = rhs._dogBrain;
	return (*this);
}

/* ==========================================================================
								GETTERS-SETTERS 
   ========================================================================== */

Brain		*Dog::getDogBrain() const {
	return (_dogBrain);
}

std::string	Dog::getOneThought() const {
	return (_dogBrain->getRandIdea());
}

void		Dog::setThought(std::string thought) {
	_dogBrain->setIdeas(thought);
}

/* ==========================================================================
								MEMBER FUNCTIONS 
   ========================================================================== */

void    Dog::makeSound() const {
	std::cout << getType() << " is BAA-baaa-BaaArking\n";
}
