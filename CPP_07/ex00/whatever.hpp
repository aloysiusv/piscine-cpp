/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:40:05 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/09 15:23:10 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>

template <typename T>
void swap(T &a, T &b) {
	
	T tmp;

	tmp = b;
	b = a;
	a = tmp;
}

template <typename T>
T min(T const &a, T const &b) {
	return (a >= b ? b : a);
}

template <typename T>
T max(T const &a, T const &b) {
	return (a <= b ? b : a);
}

#endif