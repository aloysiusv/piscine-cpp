/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:25:16 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/10 22:43:31 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void    testDisplay() {

	const int		arrayInt[5] = {98, 2, 73, 9, 0};
	const char		arrayChar[3] = {'j', 'u', 'l'};
	const char		*arrayChars[4] = {"evoli", "goupix", "dragon blanc aux yeux bleus", "\0"};
	const float		arrayFloats[2][3] = { {2.8, 4.7, 5.5}, {9.0, 0.0, 1.9}};

	std::cout << BLUE "=========TEST ARRAY INT SIZE 5=========\n\n" RESET;
	::iter(arrayInt, 5, displayArray);
	std::cout << BLUE "\n=========TEST ARRAY CHAR SIZE 3=========\n\n" RESET;
	::iter(arrayChar, 3, displayArray);
	std::cout << BLUE "\n=========TEST ARRAY STRINGS SIZE 4=========\n\n" RESET;
	::iter(arrayChars, 4, displayArray);
	std::cout << BLUE "\n=========TEST ARRAY FLOATS ADDRESSES=========\n\n" RESET;
	::iter(arrayFloats, 2, displayArray);
	std::cout << BLUE "\n=========TEST ARRAY FLOATS [0]=========\n\n" RESET;
	::iter(arrayFloats[0], 3, displayArray);
	std::cout << BLUE "\n=========TEST ARRAY FLOATS [1]=========\n\n" RESET;
	::iter(arrayFloats[1], 3, displayArray);
}

void    testAddFive() {

	int				arrayInts[5] = {98, 2, 73, 9, 0};
	float			arrayFloats[2][3] = { {2.8, 4.7, 5.5}, {9.0, 0.0, 1.9}};

	std::cout << BLUE "=========TEST ARRAY INT SIZE 5=========\n" RESET;
	::iter(arrayInts, 5, displayArray);
	::iter2(arrayInts, 5, addFive);
	std::cout <<  "Res: ";
	::iter(arrayInts, 5, displayArray);
	std::cout << BLUE "\n=========TEST ARRAY FLOATS [0]=========\n" RESET;
	::iter(arrayFloats[0], 3, displayArray);
	::iter2(arrayFloats[0], 3, addFive);
	std::cout <<  "Res: ";
	::iter(arrayFloats[0], 3, displayArray);
	std::cout << BLUE "\n=========TEST ARRAY FLOATS [1]=========\n" RESET;
	::iter(arrayFloats[1], 3, displayArray);
	::iter2(arrayFloats[1], 3, addFive);
	std::cout <<  "Res: ";
	::iter(arrayFloats[1], 3, displayArray);
	std::cout << std::endl;
}

int main() {

	std::cout << YELLOW "**********ADDFIVE FUNCTION**********\n\n" RESET;
	testAddFive();
	std::cout << YELLOW "**********DISPLAY FUNCTION**********\n\n" RESET;
	testDisplay();
	return (EXIT_SUCCESS);
}
