/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:18:45 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/10 14:35:41 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <stdexcept>
# include <cstdlib>
# include "colours.h"

template <typename T>
class Array
{
	public:
		Array<T>();
		Array<T>(uint n);
		Array<T>(Array<T> const &src);
		Array<T> &operator=(Array<T> const &rhs);
		~Array<T>();
		
		T		&operator[](uint pos);

		uint	size() const;
		
		class OutOfRangeException : public std::exception {
			public:
				char const *error() const throw();
		};
	
	private:
		uint	_size;
		T 		*_array;
};

# include "Array.tpp"

#endif