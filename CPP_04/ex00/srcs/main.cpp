/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:16:00 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/02 20:16:09 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

void	testNoVirtual() {

	const WrongAnimal	*badAnimal = new WrongAnimal();
	const WrongAnimal	*badCat = new WrongCat();

	std::cout << "[extra test]\n";
	badAnimal->makeSound();
	badCat->makeSound();
	delete badAnimal;
	delete badCat;
}

int main(void)
{
	const Animal		*meta = new Animal();
	const Animal		*cat = new Cat();
	const Animal		*dog = new Dog();

	std::cout << "[Main test]\n";
	std::cout << cat->getType() << std::endl
			  << dog->getType() << std::endl;
	meta->makeSound();
	cat->makeSound();
	dog->makeSound();
	delete meta;
	delete cat;
	delete dog;
	testNoVirtual();
	return (EXIT_SUCCESS);
}
