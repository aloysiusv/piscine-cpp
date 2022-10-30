/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 08:13:22 by SvenSvn           #+#    #+#             */
/*   Updated: 2022/10/30 16:45:46 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << BLUE << _name << " FragTrap constructor called!\n" RESET;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {

	_hitPts = 100;
	_energyPts = 100;
	_attackDmg = 30;
	std::cout << BLUE << _name << " FragTrap constructor called!\n" RESET;
}

FragTrap::FragTrap(FragTrap const &src) {

	std::cout << BLUE << _name << " FragTrap copy constructor called!\n" RESET;
	*this = src;
}

FragTrap::~FragTrap() {
	std::cout << RED << _name << " FragTrap destructor called!\n" RESET;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs) {

	_name = rhs._name;
	_hitPts = rhs._hitPts;
	_energyPts = rhs._energyPts;
	_attackDmg = rhs._attackDmg;
	std::cout << BLUE << _name << " FragTrap assignment operator called!\n" RESET;
	return (*this);
}

void		FragTrap::highFiveGuys() {

	if (_hitPts)
		std::cout << GREEN << _name << " says: \"Hey buddy, gimme five!\"\n" RESET;
	else
		std::cout << ORANGE << _name << " is dead. Can't high five no more.\n" RESET;
}
