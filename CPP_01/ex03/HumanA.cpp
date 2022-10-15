/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:18:59 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/13 17:04:43 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name),
												   _weapon(weapon) {}

HumanA::~HumanA() {}

void HumanA::attack() const {

	std::cout << LILAC << _name << RESET
			  << " attacks with his "
			  << PURPLE << _weapon.getType() << RESET << std::endl;
}

