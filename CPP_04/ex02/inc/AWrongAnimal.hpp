/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWrongAnimal.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:04:09 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/01 22:04:57 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWRONGANIMAL_HPP
# define AWRONGANIMAL_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include "colours.h"

class AWrongAnimal {
	
	public:
		AWrongAnimal();
		AWrongAnimal(const std::string type);
		AWrongAnimal(AWrongAnimal const &src);
		virtual ~AWrongAnimal();
		
		AWrongAnimal				&operator=(AWrongAnimal const &rhs);

		std::string const		getType() const;
		void					makeSound() const;

	protected:
		std::string				type;
};

#endif