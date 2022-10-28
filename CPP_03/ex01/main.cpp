/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:16:00 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/28 12:06:34 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	russia("Vladi");
	ClapTrap	china("Xixi");

	russia.setAttackDmg(6);
	russia.attack("Xixi");
	china.takeDamage(6);
	china.beRepaired(2);
	china.setAttackDmg(12);
	china.attack("Vladi");
	russia.takeDamage(12);
	return (EXIT_SUCCESS);
}
