/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:30:24 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/02 18:23:11 by lrandria         ###   ########.fr       */
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

std::string	PhoneBook::_takeUserInput(std::string const query) {

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
			|| query == INDEX && (input.size() > 1 || input.find_first_not_of("+0123456789") != input.npos)) { 
		this->_takeUserInput(query);
	}
	if (input != INDEX && input.size() > 10)
		input = input.substr(0, 9) + "."; 
	if (input == INDEX)
		displayOne(stoi(input));
	return (input);
}

void PhoneBook::addContact() {

	unsigned int	i = 0;

	std::cout << std::endl;
	if (this->_nbContacts == 8) {
		std::cout << "Bye bye oldest contact! New one incoming!" << std::endl;
		i = 0;
	}
	else {
		i = this->_nbContacts;
	}
	this->_tabContact[this->_nbContacts % 8].setFirstName(this->_takeUserInput(FIRSTNAME));
	std::cout << std::endl;
	this->_tabContact[this->_nbContacts % 8].setLastName(this->_takeUserInput(LASTNAME));
	std::cout << std::endl;
	this->_tabContact[this->_nbContacts % 8].setNickName(this->_takeUserInput(NICKNAME));
	std::cout << std::endl;
	this->_tabContact[this->_nbContacts % 8].setNumber(this->_takeUserInput(NUMBER));
	std::cout << std::endl;
	this->_tabContact[this->_nbContacts % 8].setSecret(this->_takeUserInput(SECRET));
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

void PhoneBook::displayOne(unsigned int index) {

	std::cout << std::endl << V_GREEN "INDEX: " RESET << this->_tabContact[index].getIndex() << std::endl;
	std::cout << V_GREEN "FIRST NAME: " RESET << this->_tabContact[index].getFirstName() << std::endl;
	std::cout << V_GREEN "LAST NAME: " RESET << this->_tabContact[index].getLastName() << std::endl;
	std::cout << V_GREEN "NICKNAME: " RESET << this->_tabContact[index].getNickName() << std::endl;
	std::cout << V_GREEN "NUMBER: " RESET << this->_tabContact[index].getNumber() << std::endl;
	std::cout << V_GREEN "SECRET: " RESET << this->_tabContact[index].getSecret() << std::endl;
	std::cout << std::endl;
	return ;
}

void PhoneBook::searchContact() {

	int 		index;
	std::string input;

	std::cout << std::endl;
	if (this->_nbContacts == 0) {
	
		std::cout << RED "You don't have any friends... How " RESET BOLD_H_RED "sad 👀" RESET << std::endl;
		std::cout << std::endl;
		return ;
	}
	this->displayAll();
	input = this->_takeUserInput(INDEX);
	index = std::stoi(input);
	if (!(index > this->_nbContacts))
		this->displayOne(index);
	return ;
}
