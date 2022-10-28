/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:16:56 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/28 14:52:56 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {}

ScavTrap::ScavTrap(std::string name): _name(name),
									  _hitPts(10),
									  _energyPts(10),
									  _attackDmg(0) {
	std::cout << BLUE << "Constructor!\n" RESET;
}

ScavTrap::ScavTrap(ScavTrap const &src) {

	std::cout << BLUE << "Copy constructor!\n" RESET;
	*this = src;
}

ScavTrap::~ScavTrap() {
	std::cout << RED << "Destructor!\n" RESET;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs) {

	_name = rhs._name;
	_hitPts = rhs._hitPts;
	_energyPts = rhs._energyPts;
	_attackDmg = rhs._attackDmg;
	return (*this);
}
