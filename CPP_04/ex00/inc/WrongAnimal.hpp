/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:46:22 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/01 17:20:44 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include "colours.h"

class WrongAnimal {
	
	public:
		WrongAnimal();
		WrongAnimal(const std::string type);
		WrongAnimal(WrongAnimal const &src);
		virtual ~WrongAnimal();
		
		WrongAnimal				&operator=(WrongAnimal const &rhs);

		std::string const		getType() const;
		void					makeSound() const;

	protected:
		std::string				type;
};

#endif