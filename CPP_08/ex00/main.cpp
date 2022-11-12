/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:12:31 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/12 18:58:35 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EasyFind.hpp"

void	testNotFound() {

	std::vector<int>::const_iterator	i;
	std::vector<int> 					myInts;

	myInts.push_back(4);
	myInts.push_back(5);
	myInts.push_back(6);
	displayVector(myInts);
	try {
		std::cout << "Looking for [0]\n";
		i = easyfind(myInts, 0);
		std::cout << "Found: " << *i << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

void	testFound() {

	std::vector<int>::const_iterator	i;
	std::vector<int> 					myInts;

	myInts.push_back(1);
	myInts.push_back(2);
	myInts.push_back(3);
	displayVector(myInts);
	try {
		std::cout << "Looking for [2]\n";
		i = easyfind(myInts, 2);
		std::cout << "Found: " << *i << std::endl;
	}
	catch (std::exception &e) { 
		std::cerr << e.what() << '\n';
	}
}

int main(void) {

	std::cout << YELLOW "=============TEST NOT FOUND=============\n" RESET;
	testFound();
	std::cout << YELLOW "=============TEST FOUND=============\n" RESET;
	testNotFound();
	return(EXIT_SUCCESS);
}
