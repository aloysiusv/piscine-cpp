/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:42:05 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/31 18:08:15 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Animal.hpp"

Animal::Animal() : type("animal") {
    std::cout << BLUE << type << " default constructor called!\n" RESET;
}

Animal::Animal(const std::string type) : type(type) {
    std::cout << BLUE << type << " parameterised constructor called!\n" RESET;
}

Animal::Animal(Animal const &src) {
    
    std::cout << BLUE << type << " copy constructor called!\n" RESET;
    *this = src;
}

Animal::~Animal() {
    std::cout << RED << type << " destructor called!\n" RESET;
}

Animal  &Animal::operator=(Animal const &rhs) {
    
    std::cout << BLUE << type << " assignment operator called!\n" RESET;
    type = rhs.type;
}

const std::string Animal::getType() const {
    return (type);
}

void    Animal::makeSound() const {
    std::cout << "* animalistic sounds *\n";
}
