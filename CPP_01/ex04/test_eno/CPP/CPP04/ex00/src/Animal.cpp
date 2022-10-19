/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 06:00:21 by estoffel          #+#    #+#             */
/*   Updated: 2022/09/26 07:02:18 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Animal.hpp"

Animal::Animal(void): _Type("Animal") {

	std::cout << BLUE "🐍 Constructor " BWHITE "Animal" BLUE " called" END << std::endl;
}

Animal::Animal(String type): _Type(type) {

	std::cout << BLUE "🐍 Constructor " BWHITE "Animal" BLUE " called" END << std::endl;
}

Animal::Animal(const Animal &cpy) {*this = cpy;}

Animal&	Animal::operator=(const Animal &asgn) {

	this->_Type = asgn._Type;
	return (*this);
}

const String&	Animal::getType() const {

	return (this->_Type);
}

Animal::~Animal(void) {

	std::cout << RED "💥 Destructor " BWHITE "Animal" RED " called" END << std::endl;
}

void	Animal::makeSound() const {

	std::cout << "💛 " << _Type << " noise is : ...\n" << std::endl;
}
