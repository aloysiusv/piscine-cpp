/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:08:20 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/13 17:12:36 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>
# include <cctype>
# include <cstdio>
# include <stdlib.h>
# include "colours.h"

class Weapon {

public:
	Weapon(std::string type);
	~Weapon();

	std::string const	&getType() const;
	void				setType(std::string type);

private:
	std::string		_type;

};

#endif