/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:27:40 by lrandria          #+#    #+#             */
/*   Updated: 2022/09/27 16:57:00 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp" 

Contact::Contact(void){

	return;
}

Contact::~Contact(void) {

	return;
}
 
std::string Contact::getFirstName() const {

	return (this->_firstName);
}

std::string Contact::getLastName() const {

	return (this->_lastName);
}

std::string Contact::getNickName() const {

	return (this->_nickName);
}

std::string Contact::getNumber() const {

	return (this->_number);
}

std::string Contact::getSecret() const {

	return (this->_secret);
}

void	Contact::setFirstName(std::string input) {

	this->_firstName = input;
}

void	Contact::setLastName(std::string input) {

	this->_lastName = input;
}

void	Contact::setNickName(std::string input) {

	this->_nickName = input;
}

void	Contact::setNumber(std::string input) {

	this->_number = input;
}

void	Contact::setSecret(std::string input) {

	this->_secret = input;
}
