/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedBuildDestroy.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:43:23 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/20 21:43:59 by lrandria         ###   ########.fr       */
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

Fixed::Fixed(const int num) {

	std::cout << BLUE "Int constructor called" RESET << std::endl;
	_rawBits = num << _fracBits;
}

Fixed::Fixed(const float num) {

	std::cout << BLUE "Float constructor called" RESET << std::endl;
	_rawBits = (int)(roundf(num * (1 << _fracBits)));
}

Fixed::~Fixed() {

	std::cout << RED "Destructor called" RESET << std::endl;
}
