/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:24:17 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/01 17:11:47 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat() : Animal("Cat") {
    std::cout << BLUE << type << " default constructor called!\n" RESET;
}

Cat::Cat(Cat const &src) : Animal(src) {
    
    std::cout << BLUE << type << " copy constructor called!\n" RESET;
    *this = src;
}

Cat::~Cat() {
    std::cout << RED << type << " destructor called!\n" RESET;
}

Cat  &Cat::operator=(Cat const &rhs) {
    
    std::cout << BLUE << type << " assignment operator called!\n" RESET;
    type = rhs.type;
    return (*this);
}

void    Cat::makeSound() const {
    std::cout << getType() << " is meeEooOoOOOooowing\n";
}
