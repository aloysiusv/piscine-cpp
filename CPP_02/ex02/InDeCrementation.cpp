/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InDeCrementation.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 23:19:12 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/20 23:19:22 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed &Fixed::operator++ () {
	
	_rawBits++;
	return (*this);
}

Fixed	Fixed::operator++ (int) {
	
	Fixed	tmp (*this);
	
	_rawBits++;
	return (tmp);
}

Fixed &Fixed::operator-- () {
	
	_rawBits--;
	return (*this);
}

Fixed	Fixed::operator-- (int) {
	
	Fixed	tmp (*this);
	
	_rawBits--;
	return (tmp);
}
