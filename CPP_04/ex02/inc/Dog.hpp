/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:19:33 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/01 21:05:11 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"

class Dog : public AAnimal {
    
    public:
        Dog();
        Dog(Dog const &src);
        virtual ~Dog();

        Dog             &operator=(Dog const &rhs);
        
        virtual void    makeSound() const;
    
    private:
		Brain			*_dogBrain;
};

#endif