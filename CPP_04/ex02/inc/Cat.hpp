/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:16:39 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/03 10:18:00 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"

class Cat : public AAnimal {
	
	public:
		Cat();
		Cat(Cat const &src);
		virtual ~Cat();

		Cat				&operator=(Cat const &rhs);

		Brain			*getCatBrain() const;
		std::string		getOneThought() const;
		void			setThought(std::string idea);

		virtual void	makeSound() const;

	private:
		Brain			*_catBrain;
};

#endif