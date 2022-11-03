/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:42:05 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/02 19:57:48 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

/* ==========================================================================
								COPLIEN FORM 
   ========================================================================== */

Animal::Animal() : type("Animal") {
    std::cout << BLUE "Animal default constructor called!\n" RESET;
}

Animal::Animal(const std::string type) : type(type) {
    std::cout << BLUE "Animal parameterised constructor called!\n" RESET;
}

Animal::Animal(Animal const &src) {
    
    std::cout << BLUE "Animal copy constructor called!\n" RESET;
    *this = src;
}

Animal::~Animal() {
    std::cout << RED "Animal destructor called!\n" RESET;
}

Animal  &Animal::operator=(Animal const &rhs) {
    
    std::cout << BLUE "Animal assignment operator called!\n" RESET;
    if (this != &rhs)
        type = rhs.type;
    return (*this);
}

/* ==========================================================================
								GETTERS-SETTERS 
   ========================================================================== */

const std::string Animal::getType() const {
    return (type);
}

/* ==========================================================================
								MEMBER FUNCTIONS 
   ========================================================================== */

void    Animal::makeSound() const {
    std::cout << "* animalistic sounds *\n";
}
