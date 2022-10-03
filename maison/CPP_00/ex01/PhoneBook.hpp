/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:30:10 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/02 18:08:33 by lrandria         ###   ########.fr       */
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
	void			displayOne(unsigned int index);
	void			displayAll();

private:
	std::string		_takeUserInput(std::string const query);
	unsigned int	_nbContacts;
	Contact 		_tabContact[8];
};



#endif
