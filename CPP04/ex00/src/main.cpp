/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 06:33:38 by estoffel          #+#    #+#             */
/*   Updated: 2022/09/26 07:35:25 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Cat.hpp"
#include "../incl/Dog.hpp"
#include "../incl/WrongCat.hpp"

int main()
{
	std::cout << "\n";
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	const WrongAnimal	Unknown;
	const WrongCat		UnknownCat;

	std::cout << "\n";
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << Unknown.getType() << " " << std::endl;
	std::cout << UnknownCat.getType() << " " << std::endl;
	std::cout << "\n";

	i->makeSound(); //will output the cat sound
	j->makeSound(); //will output the dog sound
	meta->makeSound(); //will output the animal sound
	Unknown.makeSound(); //will output WrongAnimal sound
	UnknownCat.makeSound(); //will output WongCat sound

	//has to delete only for virtual that got created with "new"
	delete meta;
	delete i;
	delete j;
	std::cout << "\n" << std::flush;
	return 0;
}
