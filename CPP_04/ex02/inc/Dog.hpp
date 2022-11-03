/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:19:33 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/03 10:18:55 by lrandria         ###   ########.fr       */
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
        
        Brain			*getDogBrain() const;
		std::string		getOneThought() const;
		void			setThought(std::string idea);

        virtual void    makeSound() const;
    
    private:
		Brain			*_dogBrain;
};

#endif