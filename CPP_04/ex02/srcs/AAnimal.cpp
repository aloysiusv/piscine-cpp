/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:42:05 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/03 10:32:17 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AAnimal.hpp"

/* ==========================================================================
								COPLIEN FORM 
   ========================================================================== */

AAnimal::AAnimal() : type("AAnimal") {
    std::cout << BLUE << type << " default constructor called!\n" RESET;
}

AAnimal::AAnimal(const std::string type) : type(type) {
    std::cout << BLUE <<  "AAnimal parameterised constructor called!\n" RESET;
}

AAnimal::AAnimal(AAnimal const &src) {
    
    std::cout << BLUE << "AAnimal copy constructor called!\n" RESET;
    *this = src;
}

AAnimal::~AAnimal() {
    std::cout << RED << "AAnimal destructor called!\n" RESET;
}

AAnimal  &AAnimal::operator=(AAnimal const &rhs) {
    
    std::cout << BLUE << "AAnimal assignment operator called!\n" RESET;
    if (this != &rhs)
		type = rhs.type;
    return (*this);
}

/* ==========================================================================
								GETTERS-SETTERS 
   ========================================================================== */

const std::string AAnimal::getType() const {
    return (type);
}
