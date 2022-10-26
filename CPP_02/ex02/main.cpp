/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:58:20 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/26 14:46:28 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main() {

	Fixed 			a;
	Fixed const 	b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl
			  << ++a << std::endl
			  << a << std::endl
			  << a++ << std::endl
			  << a << std::endl
			  << b << std::endl
			  << Fixed::max(a, b) << std::endl;
	return (0);
}
