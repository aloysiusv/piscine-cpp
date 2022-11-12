/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EasyFind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 22:46:31 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/12 19:01:06 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP

# include "EasyFind.hpp"

char const	*NotFoundException::what() const throw() {
	return ("\e[0;38;5;166mexception: element not found\e[0m");
}

template<typename T>
typename T::const_iterator	easyfind(T const &container, int const n) {

	typename T::const_iterator i;
	 
	if ((i = find(container.begin(), container.end(), n)) == container.end())
		throw NotFoundException() ;
	return (i);
}

template<typename T>
void displayContainer(T const container) {

	std::cout << "Vector content is: ";
	for (uint i = 0; i < (uint)container.size(); i++) {
		std::cout << "[" << container.at(i) << "] ";
	}
	std::cout << std::endl;
}

#endif
