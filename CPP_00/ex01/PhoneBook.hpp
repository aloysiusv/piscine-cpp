/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:30:10 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/01 02:34:24 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {

public:
	PhoneBook();
	~PhoneBook();

	void			addContact();
	void			searchContact();
	void			displayOne();
	void			displayAll();

private:
	void			_addInfo(std::string msg, std::string input);
	unsigned int	_nbContacts;
	Contact 		_tabContact[8];
};



#endif
