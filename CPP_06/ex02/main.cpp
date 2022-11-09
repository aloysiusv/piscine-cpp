/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 00:49:17 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/09 01:52:29 by lrandria         ###   ########.fr       */
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
		std::cout << BLUE "A by ref\n" RESET;
	}
	catch (std::exception &e) {}
	
	try {
		dynamic_cast<B&>(base);
		std::cout << BLUE "B by ref\n" RESET;
	}
	catch (std::exception &e) {}
	
	try {
		dynamic_cast<C&>(base);
		std::cout << BLUE "C by ref\n" RESET;
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
		std::cout << MAGENTA "A by ptr\n" RESET;
	else if (b)
		std::cout << MAGENTA "B by ptr\n" RESET;
	else if (c)
		std::cout << MAGENTA "C by ptr\n" RESET;
}

Base	*generate() {

	switch (rand() % 3) {

		case 0: {
			std::cout << GREEN "Generating A\n" RESET;
			return (new A());
		}
		case 1: {
			std::cout << GREEN "Generating B\n" RESET;
			return (new B());
		}
		case 2: {
			std::cout << GREEN "Generating C\n" RESET;
			return (new C());
		}
	}
	return (NULL);
}

int main() {

	uint	maxBase = 4;
	Base	*base[maxBase];
	uint	i;
	
	srand(time(NULL));
	for (i = 0; i < maxBase; i++)
		base[i] = generate();
	for (i = 0; i < maxBase; i++)
		identify(base[i]);
	for (i = 0; i < maxBase; i++)
		identify(*base[i]);
	for (i = 0; i < maxBase; i++)
		delete base[i];
}
