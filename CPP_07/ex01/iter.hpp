/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:35:19 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/10 22:43:50 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <cstdlib>
# include "colours.h"

/* ==========================================================================
								NOT CONST 
   ========================================================================== */

template <typename T>
void	addFive(T &arr) {
	arr += 5;
}

template <typename T>
void	iter2(T *array, int const len, void (*f)(T &cell)) {

	for (int i = 0; i < len; i++) {
		f(array[i]);
	}
	std::cout << std::endl;
}

/* ==========================================================================
								CONST 
   ========================================================================== */

template <typename T>
void	displayArray(T const &arr) {
	std::cout << "[" << arr << "]" << " ";
}

template <typename T>
void	iter(T const *array, int const len, void (*f)(T const &cell)) {

	for (int i = 0; i < len; i++) {
		f(array[i]);
	}
	std::cout << std::endl;
}

#endif