/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:16:39 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/01 18:09:16 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal {
	
	public:
		Cat();
		Cat(Cat const &src);
		virtual ~Cat();

		Cat				&operator=(Cat const &rhs);

		virtual void	makeSound() const;

	private:
		Brain			*_catBrain;
};

#endif