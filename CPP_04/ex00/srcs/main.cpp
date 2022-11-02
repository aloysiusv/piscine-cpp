/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:16:00 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/01 17:17:20 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

int main(void)
{
	const Animal		*meta = new Animal();
	const Animal		*cat = new Cat();
	const Animal		*dog = new Dog();
	const WrongAnimal	*badAnimal = new WrongAnimal();
	const WrongAnimal	*badCat = new WrongCat();

	std::cout << cat->getType() << std::endl
			  << dog->getType() << std::endl;
	cat->makeSound();
	dog->makeSound();
	meta->makeSound();
	badAnimal->makeSound();
	badCat->makeSound();
	delete meta;
	delete cat;
	delete dog;
	delete badAnimal;
	delete badCat;
	return (EXIT_SUCCESS);
}
