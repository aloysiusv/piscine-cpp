/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 00:14:42 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/05 01:10:48 by lrandria         ###   ########.fr       */
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

    Zombie* newZombie(std::string name);
    void    randomChump(std::string name);
    void    announce(void);

private:
    std::string _name;
}