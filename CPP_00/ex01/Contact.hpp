/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:27:45 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/01 04:00:08 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <cctype>
# include "colours.h"

# define FIRSTNAME	"Enter a valid first name: "
# define LASTNAME	"Enter a valid last name: "
# define NICKNAME	"Enter a valid nickname: "
# define NUMBER		"Enter a valid number: "
# define SECRET		"Enter a valid dark secret: "
# define INDEX		"Enter a valid index: "
# define ABC09		"thequickbrownfoxjumpsoverthelazydogTHEQUICKBROWNFOXJUMPSOVERTHELAZYDOG0123456789"

class Contact {

public:
	Contact();
	~Contact();

	void 			setFirstName(std::string);
	void 			setLastName(std::string);
	void 			setNickName(std::string);
	void 			setNumber(std::string);
	void 			setSecret(std::string);
	void 			setIndex(unsigned int);

	std::string 			getFirstName() const;
	std::string 			getLastName() const;
	std::string 			getNickName() const;
	std::string 			getNumber() const;
	std::string 			getSecret() const;
	unsigned int 			getIndex() const;

private:
	std::string		_firstName;
	std::string		_lastName;
	std::string		_nickName;
	std::string		_number;
	std::string		_secret;
	unsigned int	_index;
};

#endif
