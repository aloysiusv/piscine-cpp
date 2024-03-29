/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:19:33 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/01 17:19:25 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal {
    
    public:
        Dog();
        Dog(Dog const &src);
        virtual ~Dog();

        Dog             &operator=(Dog const &rhs);
        
        virtual void    makeSound() const;
};

#endif