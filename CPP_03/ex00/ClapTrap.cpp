/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 00:30:06 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/21 01:48:57 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name),
									  _hitPoints(10),
									  _energyPoints(10),
									  _attackDamage(0) {
	std::cout << BLUE << "Constructor!" RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &instance) {

	std::cout << BLUE << "Copy constructor!" RESET << std::endl;
	*this = instance;
}

ClapTrap::~ClapTrap() {
	std::cout << RED << "Destructor!" RESET << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &rhs) {

	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDamage = rhs._attackDamage;
	return (*this);
}
