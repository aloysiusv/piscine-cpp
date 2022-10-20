/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Comparators.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 23:20:12 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/20 23:22:58 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

bool	Fixed::operator==(Fixed const &rhs) const { 
	return (_rawBits == rhs.getRawBits()); }

bool	Fixed::operator!=(Fixed const &rhs) const { 
	return (_rawBits != rhs.getRawBits()); }

bool	Fixed::operator<(Fixed const &rhs) const { 
	return (_rawBits < rhs.getRawBits()); }

bool	Fixed::operator<=(Fixed const &rhs) const { 
	return (_rawBits <= rhs.getRawBits()); }

bool	Fixed::operator>(Fixed const &rhs) const { 
	return (_rawBits > rhs.getRawBits()); }

bool	Fixed::operator>=(Fixed const &rhs) const { 
	return (_rawBits >= rhs.getRawBits()); }