/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:03:34 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/01 21:56:22 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include "colours.h"
# include "Brain.hpp"

class AAnimal {
    
    public:
        AAnimal();
        AAnimal(const std::string type);
        AAnimal(AAnimal const &src);
        virtual ~AAnimal();
        
        AAnimal                  &operator=(AAnimal const &rhs);

        std::string const       getType() const;
        virtual void            makeSound() const = 0;

    protected:
        std::string             type;
};

#endif
