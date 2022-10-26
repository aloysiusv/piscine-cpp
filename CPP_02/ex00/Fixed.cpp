/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:58:54 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/26 09:37:19 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _rawBits(0) { 
	std::cout << BLUE "Default constructor called\n" RESET;
}

Fixed::Fixed(Fixed const &instance) {

	std::cout << BLUE "Copy constructor called\n" RESET;
	*this = instance;
}

Fixed::~Fixed() {
	std::cout << RED "Destructor called\n" RESET;
}

Fixed	&Fixed::operator=(Fixed const &copy) {

	std::cout << BLUE "Copy assignment operator called\n" RESET;
	_rawBits = copy.getRawBits();
	return (*this);
}

int		Fixed::getRawBits() const {

	std::cout << "getRawBits member function called 🐇\n";
	return (_rawBits);
}

void	Fixed::setRawBits(int const newRawBits) {

	std::cout << "setRawBits member function called 🐇\n";
	_rawBits = newRawBits;
}
