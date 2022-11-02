/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:33:22 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/01 18:08:08 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include "colours.h"
# include "Brain.hpp"

class Animal {
    
    public:
        Animal();
        Animal(const std::string type);
        Animal(Animal const &src);
        virtual ~Animal();
        
        Animal                  &operator=(Animal const &rhs);

        std::string const       getType() const;
        virtual void            makeSound() const;

    protected:
        std::string             type;
};

#endif
