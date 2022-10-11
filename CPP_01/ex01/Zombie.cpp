/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 01:07:40 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/11 16:32:47 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {

	std::cout <<  D_GREEN << " 🧟 ... ZoOoOooOMbie cReatEd... 🧟" RESET << std::endl;
}

Zombie::~Zombie() {

	std::cout << L_RED << "☠️ ..." << _name << " dEsTrOoOoooyed... ☠️ " RESET << std::endl;	
}

void	Zombie::announce() {

	std::cout << _name << ": " << "waAant mOore BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name) {
	
	_name = name;
}
