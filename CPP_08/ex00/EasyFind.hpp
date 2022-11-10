/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EasyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:13:14 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/10 15:15:45 by lrandria         ###   ########.fr       */
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

template<typename T>
typename T::const_iterator	easyfind(T const &container, int const n);

class	NotFoundException : public std::exception
{
	const char*	what() const throw() {
		return "exception 404: element not found.\n";
	};
};

template<typename T>
typename T::const_iterator	easyfind(T const &container, int const n)
{
	typename T::const_iterator i;
	 
	if ((i = find(container.begin(), container.end(), n)) == container.end())
		throw ElementNotFoundException() ;
	return (i);
}

#endif