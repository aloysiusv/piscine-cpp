/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:30:24 by lrandria          #+#    #+#             */
/*   Updated: 2022/09/28 19:59:32 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	
	this->_nbContacts = 0;
	return;
}

PhoneBook::~PhoneBook(void) {

	return;
}

bool PhoneBook::_isOnlySpaces(std::string input)
{
	for (size_t	i = 0; i < input.size(); i++)
		if (isspace(input[i]) == 0)
			return (false);
	return (true);
}


void PhoneBook::_addInfo(std::string message, std::string input)
{
	ft_message(message);
	while (std::getline(std::cin, input) && input == "")
	{
		if (std::cin.eof()) {
        	system("clear");
        	return ;
		}
		if (_isOnlySpaces(input) == true)
			ft_message(message);
		else
			return ;
	}
}

void PhoneBook::addContact(void) {

	std::string	input;

	this->_addInfo("Enter a valid first name: ", input);
	this->_tabContact[this->_nbContacts % MAX_CONTACTS].setFirstName(input);
	this->_addInfo("Enter a valid last name: ", input);
	this->_tabContact[this->_nbContacts % MAX_CONTACTS].setLastName(input);
	this->_addInfo("Enter a valid nickname: ", input);
	this->_tabContact[this->_nbContacts % MAX_CONTACTS].setNickName(input);     
	this->_addInfo("Enter a valid number: ", input);
	this->_tabContact[this->_nbContacts % MAX_CONTACTS].setNumber(input);
	this->_addInfo("Enter a valid dark secret: ", input);
	this->_tabContact[this->_nbContacts % MAX_CONTACTS].setSecret(input);
	this->_nbContacts++;
}
