/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:11:36 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/08 19:56:17 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

void	convertFromChar(const char *str) {

	char c = str[0];
	
    std::cout << "char: ";
	if (!isprint(c))
        std::cout << "Non displayable\n";
    else {
        std::cout << c << std::endl;
	}
	std::cout << "int: " << static_cast<int>(c) << std::endl
			  << std::setprecision(1)
			  << "float: " << static_cast<float>(c) << "f\n"
			  << "double: " << static_cast<double>(c) << std::endl;
}

void	convertFromInt(const char *str) {

	int	i = atoi(str);

	std::cout << "char: "; 
	if (i > CHAR_MAX || i < CHAR_MIN)
		std::cout << "impossible\n";
	else if (!isprint(static_cast<char>(i)))
		std::cout << "Non displayable\n";
	else {
		std::cout << static_cast<char>(i) << std::endl;
	}
	std::cout << "int: " << i << std::endl
			  << std::setprecision(1)
			  << "float: "  << static_cast<float>(i) << "f\n"
			  << "double: " << static_cast<double>(i) << std::endl;
}
	
void	convertFromFloat(const char *str) {

	float	f = strtof(str, NULL);

	std::cout << "char: ";
	if (f < CHAR_MIN || f > CHAR_MAX || isnanf(f) || isinff(f))
		std::cout << "impossible\n";
	else if (!isprint(static_cast<char>(f)))
		std::cout << "Non displayable\n";
	else {
		std::cout << static_cast<char>(f) << std::endl;
	}
	std::cout << "int: ";
	if (f < INT_MIN || f > INT_MAX || isnanf(f) || isinff(f))
		std::cout << "impossible\n";
	else { 
		std::cout << static_cast<int>(f) << std::endl;
	}
	std::cout << std::setprecision(1)
			  << "float: " << f << "f\n"
			  << "double: " << static_cast<double>(f) << std::endl;
	return;
}


void	convertFromDouble(const char *str) {

	double	d = strtod(str, NULL);

	std::cout << "char: ";
	if (d < CHAR_MIN || d > CHAR_MAX || isnan(d) || isinf(d))
		std::cout << "impossible\n";
	else if (!isprint(static_cast<char>(d)))
		std::cout << "Non displayable\n";
	else
		std::cout << static_cast<char>(d) << std::endl;
	std::cout << "int: ";
	if (d < INT_MIN || d > INT_MAX || isnan(d) || isinf(d))
		std::cout << "impossible\n";
	else {
		std::cout << static_cast<int>(d) << std::endl;
	}
	std::cout << std::setprecision(1) 
			  << "float: ";
	if (d < -FLT_MAX || d > FLT_MAX || isnan(d) || isinf(d))
		std::cout << "impossible\n";
	else {
		std::cout << static_cast<float>(d) << "f\n";
	}
	std::cout << "double: " << d << std::endl;
	return;
}

void	cannotDisplay() {

	std::cout << "char: impossible\n"
			  << "int: impossible\n"
			  << "float: impossible\n"
			  << "double: impossible\n";
}
