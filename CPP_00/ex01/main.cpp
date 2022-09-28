/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:27:34 by lrandria          #+#    #+#             */
/*   Updated: 2022/09/28 12:21:41 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook		pbook;
	std::string		input;

	ft_message("👽 Greetings, human. 👽");
	ft_message("You can ADD, SEARCH or EXIT");
	while (1)
	{
		if (std::getline(std::cin, input))
		{
			if (input == "ADD")
				pbook.addContact();
			// else if (input == "SEARCH")
			// 	pbook.searchContact();
			else if (input == "EXIT")
			{
				ft_message("... Farewell, human. 🛸");
				return (EXIT_SUCCESS);
			}
		}
	}
	return (EXIT_SUCCESS);	
}
