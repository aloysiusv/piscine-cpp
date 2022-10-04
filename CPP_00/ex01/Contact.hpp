/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:27:45 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/04 12:44:58 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <cctype>
# include <string>
# include <cstdio>
# include <stdlib.h>
# include "colours.h"
# include "messages.h"

enum e_query {

	FIRSTNAME,
	LASTNAME,
	NICKNAME,
	NUM,
	SECRET,
	IDX,
	E_SIZE
};

static const std::string tabQuery[E_SIZE] = { ENTER_FIRSTNAME,
											  ENTER_LASTNAME,
											  ENTER_NICKNAME,
											  ENTER_NUM,
											  ENTER_SECRET,
											  ENTER_IDX};

class Contact {

public:
	Contact();
	~Contact();

	void 					setInfo(int query, std::string);
	std::string				getInfo(int query);

private:
	std::string				_firstName;
	std::string				_lastName;
	std::string				_nickName;
	std::string				_number;
	std::string				_secret;
};

#endif
