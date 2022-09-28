/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:27:45 by lrandria          #+#    #+#             */
/*   Updated: 2022/09/27 15:13:18 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <cctype>
# include "utils.hpp"

class Contact {

public:
	Contact(void);
	~Contact(void);

	void 					setFirstName(std::string input);
	void 					setLastName(std::string input);
	void 					setNickName(std::string input);
	void 					setNumber(std::string input);
	void 					setSecret(std::string input);
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