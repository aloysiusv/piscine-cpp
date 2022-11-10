/* ************************************************************************** */
/*	                                                                          */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:42:08 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/09 17:04:21 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

void	testCopy() {

	Array<int> arrayTey(10);

	std::cout << "arrayTey size is: " << arrayTey.size() << std::endl
			  << "Let's fill arrayTey with '42' => ";
	for (uint i = 0; i < arrayTey.size(); i++) {

		arrayTey[i] = 42;
		std::cout << "'" << arrayTey[i];
	}
	std::cout << "\nLet's create a copy called arrayGney!\n";
	
	Array<int> arrayGney(arrayTey);
	
	std::cout << "Let's check what's inside arrayGney => ";
	for (uint i = 0; i < arrayGney.size(); i++) {
		std::cout << "'" << arrayGney[i] << "'";
	}
	std::cout << "\nLet's change arrayGney[3] with '24' and compare with arrayTey[3]\n";
	arrayGney[3] = 24;
	std::cout << "ARRAYTEY[3] = " << arrayTey[3] << " | " << "ARRAYGNEY[3] = " << arrayGney[3] << std::endl;

}

void	testParam() {

	try {
		Array<int> intArray(3);

		std::cout << "intArray size is: " << intArray.size() << std::endl
				  << "Let's init [0][1][2] to '9', '87', '6' => ";
		intArray[0] = 9;
		intArray[1] = 87;
		intArray[2] = 6;
		std::cout << "\nArray is now = " << intArray[0] << " " << intArray[1] << " " << intArray[2] << std::endl
		          << "Now let's try to access intArray[3]...\n";
		std::cout << "intArray[3] = " << intArray[3] << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << "Tried to access intArray[3]:" << e.what() << std::endl;
	}
}

void	testEmpty() {

	try {
		Array<std::string>	voidArray;

		std::cout << "voidArray size is: " << voidArray.size() << std::endl
				  << "Let's try to access [1] => "
				  << voidArray[0];
	}
	catch (std::exception &e) {
		std::cerr << "Tried to access voidArray[1]: " << e.what() << std::endl;
	}
}

int	main() {

	std::cout << YELLOW "==============EMPTY ARRAY TEST==============\n" RESET;
	testEmpty();
	std::cout << YELLOW "==============PARAMETERISED ARRAY TEST==============\n" RESET;
	testParam();
	std::cout << YELLOW "==============COPIED ARRAY TEST==============\n" RESET;
	testCopy();
	return (EXIT_SUCCESS);
}
