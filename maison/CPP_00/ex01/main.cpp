/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:27:34 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/03 05:17:59 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	greetings()
{
	std::cout << std::endl;
	std::cout << "👽 " V_GREEN "Greetings" RESET " 👽" << std::endl;
	std::cout << std::endl;
	std::cout << "You can " D_GREEN "ADD" RESET ", " D_GREEN "SEARCH" RESET " or " D_GREEN "EXIT" RESET;
	std::cout << std::endl << std::endl;
}

int	main(void)
{
	PhoneBook		pbook;
	std::string		input;

	greetings();
	while (std::getline(std::cin, input)) {

		if (std::cin.eof()) {
			system("clear");
			return (EXIT_FAILURE); }
		if (input == "ADD")
			pbook.addContact();
		else if (input == "SEARCH")
			pbook.searchContact();
		else if (input == "EXIT") {
			std::cout << "... " V_GREEN " Farewell " RESET "🛸🛸🛸" << std::endl;
			return (EXIT_SUCCESS); }
		else {
			std::cout << std::endl;
			std::cout << "👽👽👽 We are " D_GREEN "watching" RESET "you 👽👽👽";
			std::cout << std::endl << std::endl; }
	}
	return (EXIT_SUCCESS);	
}
