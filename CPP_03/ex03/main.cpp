/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: SvenSvn <SvenSvn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:16:00 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/30 15:54:08 by SvenSvn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void) {

	ClapTrap	russia("Vladi");
	ScavTrap	murica("Bibi");

	russia.setAttackDmg(6);
	russia.attack("Bibi");
	murica.takeDamage(6);
	murica.beRepaired(2);
	murica.attack("Vladi");
	russia.takeDamage(12);
	murica.guardGate();
	return (EXIT_SUCCESS);
}
