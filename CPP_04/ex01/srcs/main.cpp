/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:16:00 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/01 20:59:14 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

int main(void) {

	Animal	*array[10];

	for (uint i = 0; i < 10; i++) {
		if (i % 2 == 0) {
			array[i] = new Dog();
			std::cout << array[i]->getType() << std::endl;
		}
		else {
			array[i] = new Cat();
			std::cout << array[i]->getType() << std::endl;
		}
	}
	for (uint j = 0; j < 10; j++)
		delete array[j];
	return (EXIT_SUCCESS);
}
