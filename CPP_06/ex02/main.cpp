/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 00:49:17 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/09 01:42:36 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void	identify(Base &base)
{
	std::cout << "Identified: ";

	try {
		
		dynamic_cast<A&>(base);
		std::cout << "A by ref\n";
	}
	catch (std::exception &e) {}
	
	try {
		
		dynamic_cast<B&>(base);
		std::cout << "B by ref\n";
	}
	catch (std::exception &e) {}
	
	try {
		
		dynamic_cast<C&>(base);
		std::cout << "C by ref\n";
	}
	catch (std::exception &e) {}
}

void	identify(Base *p)
{
	A	*a = dynamic_cast<A*>(p);
	B	*b = dynamic_cast<B*>(p);
	C	*c = dynamic_cast<C*>(p);

	std::cout << "Identified: ";

	if (a)
		std::cout << "A by ptr\n";
	else if (b)
		std::cout << "B by ptr\n";
	else if (c)
		std::cout << "C by ptr\n";
}

Base	*generate() {

	srand(time(NULL));
	switch (rand() % 3) {

		case 0: {
		
			std::cout << "Generating A\n";
			return (new A());
		}
		case 1: {
		
			std::cout << "Generating B\n";
			return (new B());
		}
		case 2: {
		
			std::cout << "Generating C\n";
			return (new C());
		}
	}
	return (NULL);
}

int main() {

	uint	maxBase = 4;
	Base	*base[maxBase];
	uint	i;
	
	for (i = 0; i < maxBase; i++)
		base[i] = generate();
	for (i = 0; i < maxBase; i++)
		identify(base[i]);
	for (i = 0; i < maxBase; i++)
		identify(*base[i]);
	for (i = 0; i < maxBase; i++)
		delete base[i];
}
