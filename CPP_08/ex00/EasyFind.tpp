/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EasyFind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 22:46:31 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/11 13:09:08 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP

# include "EasyFind.hpp"

class	NotFoundException : public std::exception {


template<typename T>
typename T::const_iterator	easyfind(T const &container, int const n)
{
	typename T::const_iterator i;
	 
	if ((i = find(container.begin(), container.end(), n)) == container.end())
		throw ElementNotFoundException() ;
	return (i);
}

#endif
