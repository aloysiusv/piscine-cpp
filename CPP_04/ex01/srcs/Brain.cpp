/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:01:16 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/03 10:23:49 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

/* ==========================================================================
								COPLIEN FORM 
   ========================================================================== */

Brain::Brain() {

	std::cout << BLUE "Brain default constructor called!\n" RESET;
	for (uint i = 0; i < 100; i++)
		ideas[i] = "* only floof here *";
}

Brain::Brain(Brain const &src) {
	
	std::cout << BLUE "Brain copy constructor called!\n" RESET;
	*this = src;
}

Brain::~Brain() {
	std::cout << RED "Brain destructor called!\n" RESET;
}

Brain		&Brain::operator=(Brain const &rhs) {
	
	std::cout << BLUE "Brain assignment operator called!\n" RESET;
	if (this != &rhs)
		for (uint i = 0; i < 100; i++)
			ideas[i] = rhs.ideas[i];
	return (*this);
}

/* ==========================================================================
								GETTERS-SETTERS 
   ========================================================================== */

std::string		Brain::getRandIdea() const {
	return (ideas[rand() % 100]);
}

void			Brain::setIdeas(std::string idea) {
		
	for (uint i = 0; i < 100; i++)
		ideas[i] = idea;
}
