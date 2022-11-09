/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 00:38:27 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/09 01:48:20 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <cstring>
# include <cstdlib>
# include "colours.h"

class Base {

	public:
		virtual ~Base();

};

Base 			*generate();
void 			identify(Base *p);
void			identify(Base &p);

#endif
