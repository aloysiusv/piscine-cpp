/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 00:30:06 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/28 12:14:03 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {}

ClapTrap::ClapTrap(std::string name): _name(name),
									  _hitPts(10),
									  _energyPts(10),
									  _attackDmg(0) {
	std::cout << BLUE << "Constructor!\n" RESET;
}

ClapTrap::ClapTrap(ClapTrap const &src) {

	std::cout << BLUE << "Copy constructor!\n" RESET;
	*this = src;
}

ClapTrap::~ClapTrap() {
	std::cout << RED << "Destructor!\n" RESET;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs) {

	_name = rhs._name;
	_hitPts = rhs._hitPts;
	_energyPts = rhs._energyPts;
	_attackDmg = rhs._attackDmg;
	return (*this);
}

void	ClapTrap::setAttackDmg(unsigned amount) {
	
	if (amount > 100) {
		std::cout << _name << " says: \"Hey, I don't have a tank, only firearms. Gimme a reasonable amount, buddy!\"\n";
		return ;
	}
	else
		_attackDmg = amount;
}

void	ClapTrap::attack(std::string const &target) {

	if (_hitPts && _energyPts) {
		std::cout << _name << " attacks " << target << ", causing " << _attackDmg << " points of damages!\n";
		_energyPts--;
	}
	else
		std::cout << _name << " says: \"Bro/Sis, maybe I'm dead, maybe I'm too tired... Can't attack shit in any case.\"\n";
	std::cout << _name << ": " << _energyPts << " action points left | current life: " << _hitPts << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {

	if (amount > _hitPts) {
		_hitPts = 0;
		std::cout << _name << " says: \"Oh no, I'm dead.\"\n";
	}
	else {
		_hitPts -= amount;
		std::cout << _name << " says: \"Ouch, that hurts! I must heal myself.\"\n";
	}
	std::cout << _name << ": " << _energyPts << " action points left | current life: " << _hitPts << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {

	if (_hitPts && _energyPts) {
		if (amount > 1000) {
			std::cout << _name << " says: \"Can't repair that much!\"\n";	
			return ;
		}
		_hitPts += amount;
		_energyPts--;
		std::cout << _name << " healed for " << amount << " and says: "
				  << "\"Aaaah I feel so much better!\"\n";
	}
	else
		std::cout << _name << " says: \"Bro/Sis, maybe I'm dead, maybe I'm too tired... Can't repair shit in any case.\"\n";
	std::cout << _name << ": " << _energyPts << " action points left | current life: " << _hitPts << std::endl;
}
