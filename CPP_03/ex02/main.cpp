/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: SvenSvn <SvenSvn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:16:00 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/30 15:49:49 by SvenSvn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {

	ScavTrap	murica("Bibi");
	FragTrap	russia("Vladi");
	FragTrap	chechnya("Ramzy");

	russia.setAttackDmg(6);
	russia.attack("Bibi");
	murica.takeDamage(6);
	murica.beRepaired(2);
	murica.attack("Vladi");
	russia.takeDamage(12);
	murica.guardGate();
	chechnya.highFiveGuys();
	chechnya = russia;
	chechnya.highFiveGuys();
	return (EXIT_SUCCESS);
}
