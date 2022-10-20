/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:58:54 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/20 23:29:19 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed &Fixed::operator=(Fixed const &instance) {

	_rawBits = instance._rawBits;
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Fixed const &rhs) {

	out << rhs.toFloat();
	return (out);
}

int		Fixed::getRawBits() const { 
			return (_rawBits); }

void	Fixed::setRawBits(int const newRawBits) {
			_rawBits = newRawBits; }

int		Fixed::toInt() const { 
			return ((int)_rawBits >> _fracBits); }

float	Fixed::toFloat() const { 
			return ((float)_rawBits / (1 << _fracBits)); }
