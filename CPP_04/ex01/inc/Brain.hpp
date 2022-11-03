/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:57:34 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/03 09:55:51 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include "colours.h"

class Brain {
	
	public:
		Brain();
		Brain(const std::string type);
		Brain(Brain const &src);
		virtual ~Brain();
		
		Brain			&operator=(Brain const &rhs);

		std::string		getRandIdea() const;
		void			setIdeas(std::string idea);

		std::string		ideas[100];
};

#endif