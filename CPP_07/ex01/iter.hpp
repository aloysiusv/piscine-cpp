/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:35:19 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/09 16:01:02 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <cstdlib>


template <typename T>
void	displayArray(T const &arr) {
    std::cout << arr << " ";
}

template <typename T>
void	iter(T const *array, int const len, void (*f)(T const &cell)) {

    for (int i = 0; i < len; i++) {
        f(array[i]);
	}
	std::cout << std::endl;
}

#endif