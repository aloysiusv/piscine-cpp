/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:19:30 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/10 15:48:20 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include "Array.hpp"

/* ==========================================================================
								COPLIEN FORM 
   ========================================================================== */

template<typename T>
Array<T>::Array() : _size(0), _array(NULL) {
	std::cout << BLUE "Array default constructor called!\n" RESET;
}

template<typename T>
Array<T>::Array(uint n) : _size(n), _array(new T[_size]) {
	std::cout << BLUE "Array parameterised constructor called!\n" RESET;
}

template<typename T>
Array<T>::Array(const Array &src) : _size(src._size), _array(new T[src._size]) {
	
	std::cout << BLUE "Array copy constructor called!\n" RESET;
	for (uint i = 0; i < _size; i++)
        _array[i] = src._array[i];
}

template<typename T>
Array<T>::~Array() {

	if (_array)
		delete [] _array;
	std::cout << RED "Array destructor called!\n" RESET;
}

template<typename T>
Array<T> &Array<T>::operator=(Array<T> const &rhs)
{
	std::cout << BLUE "Array assignment operator called!\n" RESET;
	if (this != &rhs) {

		if (_array)
			delete[] _array;
		_array = new T[rhs._size];
		for (uint i = 0; i < _size; i++)
			_array[i] = rhs._array[i];
	}
	return (*this);
}

/* ==========================================================================
								EXCEPTIONS
   ========================================================================== */

template<typename T>
char const			*Array<T>::OutOfRangeException::error() const throw() {
	return ("\e[0;38;5;166mException: you're out of range! :(\e[0m");
}

/* ==========================================================================
								MEMBER FUNCTIONS 
   ========================================================================== */

template<typename T>
uint Array<T>::size() const {
	return (_size);
}

/* ==========================================================================
								OVERLOADS
   ========================================================================== */

template<typename T>
T	&Array<T>::operator[](uint pos) {

	if (!_array || pos >= _size)
		throw Array::OutOfRangeException();
	return (_array[pos]);
}

#endif