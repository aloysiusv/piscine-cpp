/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 00:14:42 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/10 22:52:43 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <iomanip>
# include <cctype>
# include <string>
# include <cstdio>
# include <stdlib.h>
# include "colours.h"

class Zombie {

public:
	Zombie();
	~Zombie();

	void		announce(void);
	void		setName(std::string name);

private:
	std::string _name;
	
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);