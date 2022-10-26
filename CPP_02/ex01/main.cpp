/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:58:20 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/25 23:34:14 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main() {

	Fixed a;
	Fixed const b(0);
	Fixed const c(42.42f);
	Fixed const d(b);
	
	a = Fixed(1234.4321f);
	std::cout << "a is " << a << std::endl
			  << "b is " << b << std::endl
			  << "c is " << c << std::endl
			  << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer\n"
			  << "b is " << b.toInt() << " as integer\n"
			  << "c is " << c.toInt() << " as integer\n"
			  << "d is " << d.toInt() << " as integer\n";
	return 0;
}
