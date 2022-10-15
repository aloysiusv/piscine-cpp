/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:19:07 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/13 17:00:00 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class	HumanB {

public:
	HumanB(std::string name);
	~HumanB();

	void	attack() const;
	void	setWeapon(Weapon& weapon);

private:
	std::string		_name;
	Weapon			*_weapon;
		
};

#endif