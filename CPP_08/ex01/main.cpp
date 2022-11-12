/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:31:51 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/12 22:10:36 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void	testSpecNum() {

	std::vector<int>	myVector;
	Span 				sp = Span(5);

	myVector.push_back(32);
	myVector.push_back(78);
	myVector.push_back(6);
	myVector.push_back(-35);
	myVector.push_back(98);
	sp.addSpecNumbers(myVector);
	sp.displayContainer();
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void	testRandNum() {

	Span sp = Span(5);

	sp.addRandNumbers(5);
	sp.displayContainer();
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void	testInvalidDistance() {

	Span sp = Span();

	try {
		sp.displayContainer();
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

void	testTooFull() {

	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.displayContainer();
	try {
		sp.addNumber(12);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

void	testMandatory() {

	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.displayContainer();
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

int	main() {

	std::cout << YELLOW "=============MANDATORY TEST=============\n" RESET;
	testMandatory();
	std::cout << YELLOW "=============TEST FULL CAPACITY=============\n" RESET;
	testTooFull();
	std::cout << YELLOW "=============TEST INVALID DISTANCE=============\n" RESET;
	testInvalidDistance();
	std::cout << YELLOW "=============TEST RANDOM NUMBERS=============\n" RESET;
	testRandNum();
	std::cout << YELLOW "=============TEST SPECIFIC NUMBERS=============\n" RESET;
	testSpecNum();
	return (EXIT_SUCCESS);
}
