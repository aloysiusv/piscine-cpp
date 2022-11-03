/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:16:00 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/03 10:14:42 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

void	testCopy() {

	std::cout << "\nLet's test if we get proper copies!\n";

	{	
	Cat		kitty;

	std::cout << "Every basic kitten thought: "<<  kitty.getOneThought()
			  << ". Let's do some inception... \n";
	kitty.setThought("I'm a cute kitten :3");

	Cat		copyKitty(kitty);

	std::cout << "Kitty's main thought is now : " << copyKitty.getOneThought() << std::endl;
	std::cout << "CopyKitty's main thought has always been: " << copyKitty.getOneThought() << std::endl;
	std::cout << "Kitty's brain address = [" << kitty.getCatBrain() << "]\n";
	std::cout << "CopyKitty's brain address = [" << copyKitty.getCatBrain() << "]\n"; 
	}
}

int main(void) {

	Animal	*array[6];

	for (uint i = 0; i < 4; i++) {
		if (i % 2 == 0) {
			array[i] = new Dog();
			array[i]->makeSound();
		}
		else {
			array[i] = new Cat();
			array[i]->makeSound();
		}
	}
	for (uint j = 0; j < 4; j++)
		delete array[j];
	testCopy();
	return (EXIT_SUCCESS);
}
