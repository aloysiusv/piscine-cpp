/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:30:10 by lrandria          #+#    #+#             */
/*   Updated: 2022/09/27 15:17:50 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

# define MAX_CONTACTS 8

class PhoneBook {

public:
	PhoneBook(void);
	~PhoneBook(void);

	void	addContact();
	// void	searchContact();
	// void	displayContact();

private:
	void			_addInfo(std::string msg, std::string input);
	unsigned int	_nbContacts;
	Contact 		_tabContact[MAX_CONTACTS];
};

#endif
