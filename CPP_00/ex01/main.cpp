/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:27:34 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/04 07:51:56 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	greetings() {

	std::cout << std::endl;
	std::cout << "👽 " V_GREEN "Greetings" RESET " 👽" << std::endl;
	std::cout << std::endl << "You can " D_GREEN "ADD" RESET ", "
	<< D_GREEN "SEARCH" RESET " or "
	<< D_GREEN "EXIT" RESET << std::endl << std::endl;
}

void	watchingYou() {

	std::cout << std::endl << "👽👽👽 We are " D_GREEN "watching " RESET "you 👽👽👽" << std::endl << std::endl;
}

void	funBook(std::string msg)
{
	if (msg == "NO_FRIENDS")
		std::cout << RED "You don't have any friends... How " RESET BOLD_H_RED "sad 👀" RESET << std::endl << std::endl;
	else if (msg == "BYE_FRIEND")
		std::cout << "Bye bye oldest contact! New " P_GREEN "one " RESET "incoming!" << std::endl;
	else if (msg == "WHAT_NEXT")
		std::cout << std::endl << P_GREEN "You added a new contact. What's next?" RESET << std::endl << std::endl;
	else if (msg == "STALKER")
		std::cout << std::endl << P_GREEN "We like little stalkers... 👀🛸👽" RESET << std::endl << std::endl;
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
		else
			watchingYou();
	}
	return (EXIT_SUCCESS);	
}
