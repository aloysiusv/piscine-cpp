/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 00:30:20 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/21 01:49:04 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>
# include "colours.h"

class ClapTrap {

	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &instance);
		~ClapTrap();

		ClapTrap		&operator=(const ClapTrap &rhs);

		void 			attack(const std::string& target);
		void 			takeDamage(unsigned int amount);
		void 			beRepaired(unsigned int amount);

	private:
		std::string		_name;
		unsigned int 	_hitPoints;
		unsigned int 	_energyPoints;
		unsigned int 	_attackDamage;
};

#endif