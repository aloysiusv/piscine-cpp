/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EasyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:13:14 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/12 18:53:42 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <vector>
# include <stdexcept>
# include <iterator>
# include <algorithm>
# include "colours.h"

template<typename T>
typename T::const_iterator	easyfind(T const &container, int const n);

template<typename T>
void	displayVector(T const container);

class	NotFoundException : public std::exception {
	public:
		const char*	what() const throw();
};

# include "EasyFind.tpp"

#endif