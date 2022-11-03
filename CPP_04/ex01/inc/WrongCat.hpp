/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:47:06 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/03 10:19:47 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"
# include "Brain.hpp"

class WrongCat : public WrongAnimal {
	
	public:
		WrongCat();
		WrongCat(WrongCat const &src);
		virtual ~WrongCat();

		WrongCat		&operator=(WrongCat const &rhs);

		Brain			*getWrongCatBrain() const;
		std::string		getOneThought() const;
		void			setThought(std::string idea);

		void			makeSound() const;

	private:
		Brain			*_wrongCatBrain;
};

#endif