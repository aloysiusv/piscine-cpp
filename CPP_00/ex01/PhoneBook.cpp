/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:30:24 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/05 00:06:22 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() { _nbContacts = 0; return; }

PhoneBook::~PhoneBook() { return; }

std::string	truncate(std::string input) {

	if (input.size() > 10)
		input = input.substr(0, 9) + ".";
	return (input);
}

void PhoneBook::displayOne(int index) {

	std::cout << std::endl;
	std::cout << V_GREEN "FIRST NAME: " RESET
			  << _tabContact[index].getInfo(FIRSTNAME) << std::endl;
	std::cout << V_GREEN "LAST NAME: " RESET
			  << _tabContact[index].getInfo(LASTNAME) << std::endl;
	std::cout << V_GREEN "NICKNAME: " RESET
			  << _tabContact[index].getInfo(NICKNAME) << std::endl;
	std::cout << V_GREEN "NUMBER: " RESET
			  << _tabContact[index].getInfo(NUM) << std::endl;
	std::cout << V_GREEN "SECRET: " RESET
			  << _tabContact[index].getInfo(SECRET) << std::endl;
	std::cout << std::endl;
	funBook("STALKER");
}

void PhoneBook::displayAll() {
	
	int	i = 0;

	std::cout << std::right << std::setw(10) << "index" << "|" <<
	std::right << std::setw(10) << "first name" << "|" <<
	std::right << std::setw(10) << "last name" << "|" <<
	std::right << std::setw(10) << "nickname" << std::endl;
	std::cout << std::right << std::setw(10) << "      " << "|" <<
	std::right << std::setw(10) << "          " << "|" <<
	std::right << std::setw(10) << "         " << "|" <<
	std::right << std::setw(10) << std::endl;
	while (i < 8) {

		std::cout << std::right << std::setw(10) << i << "|";
		std::cout << std::right << std::setw(10) << truncate(_tabContact[i].getInfo(FIRSTNAME)) << "|";
		std::cout << std::right << std::setw(10) << truncate(_tabContact[i].getInfo(LASTNAME)) << "|";
		std::cout << std::right << std::setw(10) << truncate(_tabContact[i].getInfo(NICKNAME)) << std::endl;
		i++;
	}
	std::cout << std::endl;
}

bool	hasNonAscii(std::string input) {

	for (int i = 0; input[i]; i++)
		if (isprint(input[i]) == 0)
			return (true);
	return (false);
}

void	PhoneBook::_takeUserInput(int mode, std::string &input) {

	std::cout << std::endl << D_GREEN << tabQuery[mode] << RESET;
	std::getline(std::cin, input);
	if (std::cin.eof()) {
		system("clear");
		return;
	}
	if (input == "" || hasNonAscii(input) == true
					|| input.find_first_not_of("\t\v\f\n\r ") == input.npos
					|| (mode == NUM && input.find_first_not_of("+0123456789") != input.npos)
					|| (mode == IDX && input.find_first_not_of("01234567") != input.npos)) {
		_takeUserInput(mode, input);
	}
}

void PhoneBook::searchContact() {

	int 			index;
	std::string 	input;

	std::cout << std::endl;
	if (_nbContacts == 0) {
		funBook("NO_FRIENDS");
		return ;
	}
	displayAll();
	_takeUserInput(IDX, input);
	if (std::cin.eof()) {
		system("clear");
		return;
	}
	index = atoi(input.c_str());
	if (sscanf(input.c_str(), "%d", &index) == -1 || index < 0 || index >= _nbContacts)
	{
		std::cout << std::endl << D_GREEN << "Try again..." << RESET;
		searchContact();
	}
	else
		displayOne(index);
}

void PhoneBook::addContact() {

	std::string		input;

	std::cout << std::endl;
	if (_nbContacts == 8)
		funBook("BYE_FRIENDS");
	for (int i = 0; i < E_SIZE - 1; i++) {
	
		_takeUserInput(i, input);
		_tabContact[_nbContacts % 8].setInfo(i, input);
	}
	_nbContacts++;
	funBook("WHAT_NEXT");
}
