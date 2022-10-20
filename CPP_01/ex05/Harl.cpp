/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:37:26 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/20 18:06:51 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void	Harl::debug() {

	std::cout << GREEN " 🙂 I love having extra bacon for my 7XL-double-cheese-"
			  << "triple-pickle-special-ketchup burger. I really do!" RESET
			  << std::endl; 
}

void	Harl::info() {

	std::cout << YELLOW " 😐 I cannot believe adding extra bacon costs more money."
			  << "You didn’t put enough bacon in my burger! "
			  << "If you did, I wouldn’t be asking for more!" RESET
			  << std::endl;
}

void	Harl::warning() {

	std::cout << ORANGE " ☹️ I think I deserve to have some extra bacon for free. "
			  << "I’ve been coming for years whereas you started working here "
			  << "since last month." RESET << std::endl;
}

void	Harl::error() {

	std::cout << RED " 😡 This is unacceptable! I want to speak to the manager now." RESET << std::endl;
}

void    Harl::complain(std::string level) {

	const std::string	whichLvl[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	void (Harl::*funcPtr[4])(void)	= { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };

	for (unsigned int i = 0; i < 4; i++)
	{
		if (level == whichLvl[i]) {
			(this->*funcPtr[i])();
			return ;
		}
	}
	std::cerr << L_RED "error: invalid input" RESET << std::endl;
}
