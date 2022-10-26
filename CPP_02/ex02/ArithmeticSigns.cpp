/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ArithmeticSigns.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 23:21:01 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/26 09:57:36 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed	Fixed::operator+(Fixed const &rhs) const { 
	return (Fixed(toFloat() + rhs.toFloat())); }

Fixed	Fixed::operator-(Fixed const &rhs) const { 
	return (Fixed(toFloat() - rhs.toFloat())); }

Fixed	Fixed::operator*(Fixed const &rhs) const { 
	return (Fixed(toFloat() * rhs.toFloat())); }

Fixed	Fixed::operator/(Fixed const &rhs) const { 
	return (Fixed(toFloat() / rhs.toFloat())); }
