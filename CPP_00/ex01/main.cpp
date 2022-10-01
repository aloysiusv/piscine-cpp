/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:27:34 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/01 04:27:17 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook		pbook;
	std::string		input;

	std::cout << std::endl;
	std::cout << "👽 " V_GREEN "Greetings" RESET " 👽" << std::endl;
	std::cout << std::endl;
	std::cout << "You can " D_GREEN "ADD" RESET ", " D_GREEN "SEARCH" RESET " or " D_GREEN "EXIT" RESET;
	std::cout << std::endl << std::endl;
	while (std::getline(std::cin, input)) {

		if (std::cin.eof()) {
			system("clear");
			return (EXIT_FAILURE);
		}
		if (input == "ADD")
			pbook.addContact();
		else if (input == "SEARCH")
			pbook.searchContact();
		else if (input == "EXIT") {
			std::cout << "... " V_GREEN " Farewell " RESET "🛸🛸🛸" << std::endl;
			return (EXIT_SUCCESS);
		}
	}
	return (EXIT_SUCCESS);	
}
