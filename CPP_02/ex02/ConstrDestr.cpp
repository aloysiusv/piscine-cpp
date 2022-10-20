/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConstrDestr.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 23:17:26 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/20 23:29:02 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _rawBits(0) {}

Fixed::Fixed(const Fixed &instance) {
		*this = instance; }

Fixed::Fixed(const int num) {
	_rawBits = num << _fracBits;}

Fixed::Fixed(const float num) {
	_rawBits = (int)(roundf(num * (1 << _fracBits))); }

Fixed::~Fixed() {}
