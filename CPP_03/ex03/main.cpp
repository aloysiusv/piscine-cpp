/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:16:00 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/30 16:47:09 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void) {

	DiamondTrap	russia("Vladi");
	ClapTrap	murica("Bibi");

	russia.setAttackDmg(6);
	russia.attack("Bibi");
	murica.takeDamage(6);
	murica.beRepaired(2);
	murica.attack("Vladi");
	russia.takeDamage(12);
	murica.guardGate();
	return (EXIT_SUCCESS);
}
