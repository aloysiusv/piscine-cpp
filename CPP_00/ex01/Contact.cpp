/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:27:40 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/01 01:14:59 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp" 

Contact::Contact(void) {

	this->setFirstName("");
	this->setLastName("");
	this->setNickName("");
	this->setNumber("");
	this->setSecret("");
	return ;
}

Contact::~Contact(void) {

	return;
}
 
void	Contact::setFirstName(std::string str1) {

	this->_firstName = str1;
}

void	Contact::setLastName(std::string str2) {

	this->_lastName = str2;
}

void	Contact::setNickName(std::string str3) {

	this->_nickName = str3;
}

void	Contact::setNumber(std::string str4) {

	this->_number = str4;
}

void	Contact::setSecret(std::string str5) {

	this->_secret = str5;
}

void	Contact::setIndex(unsigned int idx) {

	this->_index = idx;
}

std::string	Contact::getFirstName() const {

	return (this->_firstName);
}

std::string	Contact::getLastName() const {

	return (this->_lastName);
}

std::string	Contact::getNickName() const {

	return (this->_nickName);
}

std::string	Contact::getNumber() const {

	return (this->_number);
}

std::string	Contact::getSecret() const {

	return (this->_secret);
}

unsigned int	Contact::getIndex() const {

	return (this->_index);
}