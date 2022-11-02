/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:42:05 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/01 19:09:30 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << BLUE << type << " default constructor called!\n" RESET;
}

Animal::Animal(const std::string type) : type(type) {
    std::cout << BLUE <<  "Animal parameterised constructor called!\n" RESET;
}

Animal::Animal(Animal const &src) {
    
    std::cout << BLUE << "Animal copy constructor called!\n" RESET;
    *this = src;
}

Animal::~Animal() {
    std::cout << RED << "Animal destructor called!\n" RESET;
}

Animal  &Animal::operator=(Animal const &rhs) {
    
    std::cout << BLUE << "Animal assignment operator called!\n" RESET;
    type = rhs.type;
    return (*this);
}

const std::string Animal::getType() const {
    return (type);
}

void    Animal::makeSound() const {
    std::cout << "* animalistic sounds *\n";
}
