/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 00:30:20 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/28 12:13:19 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <cstdlib>
# include <string>
# include "colours.h"

class ClapTrap {

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &src);
		~ClapTrap();

		ClapTrap		&operator=(ClapTrap const &rhs);

		void 			attack(std::string const &target);
		void 			takeDamage(unsigned int amount);
		void 			beRepaired(unsigned int amount);

		void			setAttackDmg(unsigned amount);

	private:
		std::string		_name;
		unsigned int 	_hitPts;
		unsigned int 	_energyPts;
		unsigned int 	_attackDmg;
};

#endif
