/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:16:00 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/03 10:32:32 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AAnimal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/AWrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

int main() {

	const AAnimal		*cat = new Cat();
	const AAnimal		*dog = new Dog();
	const AWrongAnimal	*badAnimal = new AWrongAnimal();
	const AWrongAnimal	*badCat = new WrongCat();

	std::cout << cat->getType() << std::endl
			  << dog->getType() << std::endl;
	cat->makeSound();
	dog->makeSound();
	badAnimal->makeSound();
	badCat->makeSound();
	delete cat;
	delete dog;
	delete badAnimal;
	delete badCat;
	return (EXIT_SUCCESS);
}
