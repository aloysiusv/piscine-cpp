/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:01:16 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/01 18:31:46 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain() {
	std::cout << BLUE "Brain default constructor called!\n" RESET;
}

Brain::Brain(Brain const &src) {
	
	std::cout << BLUE "Brain copy constructor called!\n" RESET;
	*this = src;
}

Brain::~Brain() {
	std::cout << RED "Brain destructor called!\n" RESET;
}

Brain  &Brain::operator=(Brain const &rhs) {
	
	std::cout << BLUE "Brain assignment operator called!\n" RESET;
	*this = rhs;
	return (*this);
}