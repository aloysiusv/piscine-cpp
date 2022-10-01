/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:30:24 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/01 09:05:06 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {

	this->_nbContacts = 0;
	return;
}

PhoneBook::~PhoneBook() {

	return;
}

std::string	retrieveInfo(std::string const query) {

	std::string	input;

	std::cout << D_GREEN;
	std::cout << query;
	std::cout << RESET;
	std::getline(std::cin, input);	
	if (std::cin.eof()) {
		system("clear");
		return (NULL);
	}
	else if (input == "" 
			|| input.find_first_not_of("\t\v\f\n\r ") == input.npos
			|| query == NUMBER && input.find_first_not_of("+0123456789") != input.npos
			|| query == INDEX  && input.find_first_not_of("01234567") != input.npos) { 
		std::cout << std::endl;
		retrieveInfo(query);
	}
	if (input == INDEX && input.size() > 9) {

		input = "";
		retrieveInfo(query); 
	}
	else if (input != INDEX && input.size() > 10)
		input = input.substr(0, 9) + "."; 
	return (input);
}

void PhoneBook::addContact() {

	std::cout << std::endl;
	if (this->_nbContacts == 8) {
		std::cout << "Bye bye oldest contact! New one incoming!" << std::endl;
		this->_nbContacts = 0;
	}
	this->_tabContact[this->_nbContacts % 8].setFirstName(retrieveInfo(FIRSTNAME));
	std::cout << std::endl;
	this->_tabContact[this->_nbContacts % 8].setLastName(retrieveInfo(LASTNAME));
	std::cout << std::endl;
	this->_tabContact[this->_nbContacts % 8].setNickName(retrieveInfo(NICKNAME));
	std::cout << std::endl;
	this->_tabContact[this->_nbContacts % 8].setNumber(retrieveInfo(NUMBER));
	std::cout << std::endl;
	this->_tabContact[this->_nbContacts % 8].setSecret(retrieveInfo(SECRET));
	std::cout << std::endl;
	this->_tabContact[this->_nbContacts % 8].setIndex(this->_nbContacts);
	this->_nbContacts++;
		std::cout << P_GREEN "You added a new contact. What's next?" RESET << std::endl << std::endl;
	return ;
}

void PhoneBook::displayAll() {
	
	unsigned int	i = 0;

	std::cout << std::right << std::setw(10) << "index" << "|"
	<< std::right << std::setw(10) << "first name" << "|"
	<< std::right << std::setw(10) << "last name" << "|"
	<< std::right << std::setw(10) << "nickname" << std::endl;
	std::cout << std::right << std::setw(10) << "      " << "|"
	<< std::right << std::setw(10) << "          " << "|"
	<< std::right << std::setw(10) << "         " << "|"
	<< std::right << std::setw(10) << std::endl;
	while (this->_tabContact[i].getFirstName() != "")
	{
		std::cout << std::right << std::setw(10) << this->_tabContact[i].getIndex() << "|"
		<< std::right << std::setw(10) << this->_tabContact[i].getFirstName() << "|"
		<< std::right << std::setw(10) << this->_tabContact[i].getLastName() << "|"
		<< std::right << std::setw(10) << this->_tabContact[i].getNickName() << std::endl;
		i++;
	}
	std::cout << std::endl;
	return ;
}

void PhoneBook::displayOne() {

	long	idx = stol(retrieveInfo(INDEX));
	if (sscanf(retrieveInfo(INDEX).c_str(), "%ld", &idx) == -1) {}
	if (idx < 0 || idx > 7 || idx == this->_nbContacts)
		displayOne();
	else {
		std::cout << std::endl;
		std::cout << V_GREEN "INDEX: " RESET << this->_tabContact[idx].getIndex() << std::endl;
		std::cout << V_GREEN "FIRST NAME: " RESET << this->_tabContact[idx].getFirstName() << std::endl;
		std::cout << V_GREEN "LAST NAME: " RESET << this->_tabContact[idx].getLastName() << std::endl;
		std::cout << V_GREEN "NICKNAME: " RESET << this->_tabContact[idx].getNickName() << std::endl;
		std::cout << std::endl;
	}
}

void PhoneBook::searchContact() {

	std::cout << std::endl;
	if (this->_nbContacts == 0) {
	
		std::cout << RED "You don't have any friends... How " RESET BOLD_H_RED "sad 👀" RESET << std::endl;
		std::cout << std::endl;
		return ;
	}
	this->displayAll();
	this->displayOne();
	return ;
}
