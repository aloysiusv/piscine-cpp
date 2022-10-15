/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:19:01 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/13 17:05:55 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {}

HumanB::~HumanB() {}

void	HumanB::setWeapon(Weapon &weapon) {
	
	_weapon = &weapon;
}

void	HumanB::attack() const {
	
	std::cout << BLUE << _name << RESET
			  << " attacks with his "
			  << CYAN << _weapon->getType() << RESET << std::endl;
}
