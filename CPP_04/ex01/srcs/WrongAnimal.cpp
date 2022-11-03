/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:40:40 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/03 10:22:28 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"

/* ==========================================================================
								COPLIEN FORM 
   ========================================================================== */

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
    std::cout << BLUE << type << " default constructor called!\n" RESET;
}

WrongAnimal::WrongAnimal(const std::string type) : type(type) {
    std::cout << BLUE << type << " parameterised constructor called!\n" RESET;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) {
    
    std::cout << BLUE << type << " copy constructor called!\n" RESET;
    *this = src;
}

WrongAnimal::~WrongAnimal() {
    std::cout << RED << type << " destructor called!\n" RESET;
}

WrongAnimal  &WrongAnimal::operator=(WrongAnimal const &rhs) {
    
    std::cout << BLUE << type << " assignment operator called!\n" RESET;
    if (this != &rhs)
		type = rhs.type;
    return (*this);
}

/* ==========================================================================
								GETTERS-SETTERS 
   ========================================================================== */

const std::string WrongAnimal::getType() const {
    return (type);
}

/* ==========================================================================
								MEMBER FUNCTIONS 
   ========================================================================== */

void    WrongAnimal::makeSound() const {
    std::cout << "* wrong animalistic sounds *\n";
}
