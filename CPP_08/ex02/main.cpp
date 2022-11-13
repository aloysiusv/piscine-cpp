/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 22:45:54 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/13 13:58:39 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

void	testCpyConstructor() {

	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int> mstackCpy = mstack;

	std::cout << "mstack = ";
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite) {

		std::cout << "[" << *it << "] ";
		++it;	
	}
	std::cout << std::endl;
	std::cout << "mstackCpy = ";
	MutantStack<int>::iterator itCpy = mstackCpy.begin();
	MutantStack<int>::iterator iteCpy = mstackCpy.end();

	++itCpy;
	--itCpy;
	while (itCpy != iteCpy) {

		std::cout << "[" << *itCpy << "] ";
		++itCpy;	
	}
	std::cout << std::endl;
}

void	testVector() {

	std::vector<int> vector;
	vector.push_back(5);
	vector.push_back(17);
	std::cout << vector.back() << std::endl;
	vector.pop_back();
	std::cout << vector.size() << std::endl;
	vector.push_back(3);
	vector.push_back(5);
	vector.push_back(737);
	vector.push_back(0);
	std::vector<int>::iterator itl = vector.begin();
	std::vector<int>::iterator itle = vector.end();
	++itl;
	--itl;
	while (itl != itle)	{
		std::cout << *itl << std::endl;
		++itl;
	}
}

void	testList() {

	std::list<int> list;
	list.push_back(5);
	list.push_back(17);
	std::cout << list.back() << std::endl;
	list.pop_back();
	std::cout << list.size() << std::endl;
	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	list.push_back(0);
	std::list<int>::iterator itl = list.begin();
	std::list<int>::iterator itle = list.end();
	++itl;
	--itl;
	while (itl != itle)	{
		std::cout << *itl << std::endl;
		++itl;
	}
}

void	testMandatory() {

	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite) {

		std::cout << *it << std::endl;
		++it;	
	}
	std::stack<int> s(mstack);
}

int main() {
	
	std::cout << YELLOW "=============TEST MANDATORY=============\n" RESET;
	testMandatory();
	std::cout << YELLOW "=============TEST LIST=============\n" RESET;
	testList();
	std::cout << YELLOW "=============TEST VECTOR=============\n" RESET;
	testVector();
	std::cout << YELLOW "=============TEST COPY CONSTRUCTOR=============\n" RESET;
	testCpyConstructor();
	return (EXIT_SUCCESS);
}
