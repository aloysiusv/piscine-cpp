/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:40:43 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/01 17:10:55 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
    std::cout << BLUE << type << " default constructor called!\n" RESET;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src) {
    
    std::cout << BLUE << type << " copy constructor called!\n" RESET;
    *this = src;
}

WrongCat::~WrongCat() {
    std::cout << RED << type << " destructor called!\n" RESET;
}

WrongCat  &WrongCat::operator=(WrongCat const &rhs) {
    
    std::cout << BLUE << type << " assignment operator called!\n" RESET;
    type = rhs.type;
    return (*this);
}

void    WrongCat::makeSound() const {
    std::cout << getType() << " is doing a wrong meeEooOoOOOooow\n";
}
