/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:19:04 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/13 16:14:15 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class	HumanA {

public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();

	void	attack() const;

private:
	std::string		_name;
	Weapon			_weapon;
		
};

#endif