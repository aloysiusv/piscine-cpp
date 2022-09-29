/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:27:45 by lrandria          #+#    #+#             */
/*   Updated: 2022/09/29 15:54:51 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <cctype>
# include "utils.hpp"

class Contact {

public:
	Contact(std::string str1,
			std::string str2,
			std::string str3,
			std::string str4,
			std::string str5);
	~Contact(void);

	std::string 			getFirstName() const;
	std::string 			getLastName() const;
	std::string 			getNickName() const;
	std::string 			getNumber() const;
	std::string 			getSecret() const;

private:
	std::string				_firstName;
	std::string				_lastName;
	std::string				_nickName;
	std::string				_number;
	std::string				_secret;

};

#endif