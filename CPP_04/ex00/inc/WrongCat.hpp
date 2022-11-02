/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:47:06 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/01 17:20:47 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	
	public:
		WrongCat();
		WrongCat(WrongCat const &src);
		virtual ~WrongCat();

		WrongCat		&operator=(WrongCat const &rhs);

		void			makeSound() const;
};

#endif