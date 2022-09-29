/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookAdd.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:30:24 by lrandria          #+#    #+#             */
/*   Updated: 2022/09/29 18:50:24 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_nbContacts = 0;
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

std::string	addInfo(std::string const query)
{
	std::string	input;

	ft_message(query);
	while (std::getline(std::cin, input) && input == "")
	{
		if (std::cin.eof()) {
			system("clear");
			return ;
		}
		if (input.find_first_not_of(ABC09) == input.npos
			|| query == NUMBER && input.find_first_not_of("\t\v\r\f\n +0123456789") == input.npos)
			ft_message(query);
	}
	return (input);
}

void PhoneBook::addContact(void)
{
	Contact	newContact(addInfo(FIRSTNAME), addInfo(LASTNAME), addInfo(NICKNAME),
					addInfo(NUMBER), addInfo(SECRET));
	this->_tabContact[this->_nbContacts % MAX_CONTACTS] = newContact;
}
