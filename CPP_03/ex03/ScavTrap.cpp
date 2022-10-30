/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: SvenSvn <SvenSvn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:16:56 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/30 08:05:43 by SvenSvn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {

	_name = "default";
	_hitPts = 0;
	_energyPts = 0;
	_attackDmg = 0;
	std::cout << BLUE << _name << " ScavTrap constructor!\n" RESET;
}

ScavTrap::ScavTrap(std::string name) {

	_name = name;
	_hitPts = 100;
	_energyPts = 50;
	_attackDmg = 20;
	std::cout << BLUE << _name << " ScavTrap constructor!\n" RESET;
}

ScavTrap::ScavTrap(ScavTrap const &src) {

	std::cout << BLUE << _name << " ScavTrap copy constructor!\n" RESET;
	*this = src;
}

ScavTrap::~ScavTrap() {
	std::cout << RED << _name << " ScavTrap destructor!\n" RESET;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs) {

	_name = rhs._name;
	_hitPts = rhs._hitPts;
	_energyPts = rhs._energyPts;
	_attackDmg = rhs._attackDmg;
	std::cout << BLUE << _name << " ScavTrap assignment operator called!\n" RESET;
	return (*this);
}

void		ScavTrap::guardGate() {

	if (_hitPts)
		std::cout << GREEN << _name << " is in Gate Keeper\n" RESET;
	else
		std::cout << ORANGE << _name << " is dead. Can't guard shit\n" RESET;
}
