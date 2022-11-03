/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:31:49 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/02 20:01:13 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

/* ==========================================================================
								COPLIEN FORM 
   ========================================================================== */

Dog::Dog() : Animal("Dog") {
    std::cout << BLUE << type << " default constructor called!\n" RESET;
}

Dog::Dog(Dog const &src) : Animal(src) {
    
    std::cout << BLUE << type << " copy constructor called!\n" RESET;
    *this = src;
}

Dog::~Dog() {
    std::cout << RED << type << " destructor called!\n" RESET;
}

Dog  &Dog::operator=(Dog const &rhs) {
    
    std::cout << BLUE << type << " assignment operator called!\n" RESET;
    if (this != &rhs)
        type = rhs.type;
    return (*this);
}

/* ==========================================================================
								MEMBER FUNCTIONS 
   ========================================================================== */

void    Dog::makeSound() const {
    std::cout << getType() << " is BAA-baaa-BaaArking\n";
}
