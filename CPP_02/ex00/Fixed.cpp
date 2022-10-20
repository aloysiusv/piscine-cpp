/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:58:54 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/20 21:25:04 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _rawBits(0) { 
	
	std::cout << BLUE "Default constructor called" RESET << std::endl;
}

Fixed::Fixed(const Fixed &instance) {

	std::cout << BLUE "Copy constructor called" RESET << std::endl;
	*this = instance;
}

Fixed::~Fixed() {

	std::cout << RED "Destructor called" RESET << std::endl;
}

Fixed & Fixed::operator=(const Fixed &instance) {

	std::cout << BLUE "Copy assignment operator called" RESET << std::endl;
	_rawBits = instance.getRawBits();
	return (*this);
}

int		Fixed::getRawBits() const {

	std::cout << "getRawBits member function called 🐇" << std::endl;
	return (_rawBits);
}

void	Fixed::setRawBits(int const newRawBits) {

	std::cout << "setRawBits member function called 🐇" << std::endl;
	_rawBits = newRawBits;
}
