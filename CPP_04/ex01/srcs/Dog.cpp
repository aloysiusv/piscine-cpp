/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:31:49 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/01 18:11:44 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog() : Animal("Dog") {

    _dogBrain = new Brain;
    std::cout << BLUE << type << " default constructor called!\n" RESET;
}

Dog::Dog(Dog const &src) : Animal(src) {
    
    std::cout << BLUE << type << " copy constructor called!\n" RESET;
    *this = src;
}

Dog::~Dog() {

    delete _dogBrain;
    std::cout << RED << type << " destructor called!\n" RESET;
}

Dog  &Dog::operator=(Dog const &rhs) {
    
    std::cout << BLUE << type << " assignment operator called!\n" RESET;
    type = rhs.type;
    return (*this);
}

void    Dog::makeSound() const {
    std::cout << getType() << " is BAA-baaa-BaaArking\n";
}
