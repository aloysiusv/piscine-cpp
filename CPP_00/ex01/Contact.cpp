/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:27:40 by lrandria          #+#    #+#             */
/*   Updated: 2022/09/29 15:41:07 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp" 

Contact::Contact(std::string str1,
				 std::string str2,
				 std::string str3,
				 std::string str4,
				 std::string str5): _firstName(str1),
				 					_lastName(str2),
									_nickName(str3),
									_number(str4),
									_secret(str5)
{

	return ;
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
