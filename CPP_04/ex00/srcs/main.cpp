/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:16:00 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/31 18:08:39 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Animal.hpp"
#include "inc/Dog.hpp"
#include "inc/Cat.hpp"

int main(void)
{
	const Animal	*meta = new Animal();
	const Animal	*cat = new Cat();
	const Animal	*dog = new Dog();

	std::cout << cat->getType() << " \n"
			  << dog->getType() << " \n";
	cat->makeSound();
	dog->makeSound();
	meta->makeSound();
	return (EXIT_SUCCESS);
}
