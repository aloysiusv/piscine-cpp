/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWrongAnimal.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:40:40 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/01 21:27:46 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AWrongAnimal.hpp"

AWrongAnimal::AWrongAnimal() : type("AWrongAnimal") {
    std::cout << BLUE << type << " default constructor called!\n" RESET;
}

AWrongAnimal::AWrongAnimal(const std::string type) : type(type) {
    std::cout << BLUE << type << " parameterised constructor called!\n" RESET;
}

AWrongAnimal::AWrongAnimal(AWrongAnimal const &src) {
    
    std::cout << BLUE << type << " copy constructor called!\n" RESET;
    *this = src;
}

AWrongAnimal::~AWrongAnimal() {
    std::cout << RED << type << " destructor called!\n" RESET;
}

AWrongAnimal  &AWrongAnimal::operator=(AWrongAnimal const &rhs) {
    
    std::cout << BLUE << type << " assignment operator called!\n" RESET;
    type = rhs.type;
    return (*this);
}

const std::string AWrongAnimal::getType() const {
    return (type);
}

void    AWrongAnimal::makeSound() const {
    std::cout << "* A wrong animalistic sounds *\n";
}
