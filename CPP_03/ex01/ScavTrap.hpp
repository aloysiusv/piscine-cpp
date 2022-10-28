/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:16:59 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/28 18:07:39 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &src);
		~ScavTrap();

		ScavTrap		&operator=(ScavTrap const &rhs);

		void 			guardGate();
};

#endif