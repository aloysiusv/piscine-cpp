/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:30:24 by lrandria          #+#    #+#             */
/*   Updated: 2022/09/28 12:20:53 by lrandria         ###   ########.fr       */
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

void PhoneBook::_addInfo(std::string message, std::string input)
{
	while (std::getline(std::cin, input) && input == "")
		ft_message(message);
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
