/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: SvenSvn <SvenSvn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:16:00 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/30 08:54:25 by SvenSvn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	russia("Vladi");
	ClapTrap	china("Xixi");
	ClapTrap	chechnya1("Ramzy");
	ClapTrap	chechnya2(russia);

	chechnya1 = russia;
	chechnya1.beRepaired(1);
	chechnya2.beRepaired(2);
	russia.setAttackDmg(6);
	russia.attack("Xixi");
	china.takeDamage(6);
	china.beRepaired(2);
	china.setAttackDmg(12);
	china.attack("Vladi");
	russia.takeDamage(12);
	return (EXIT_SUCCESS);
}
