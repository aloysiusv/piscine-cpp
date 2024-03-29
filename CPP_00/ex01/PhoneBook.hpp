/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:30:10 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/04 12:45:32 by lrandria         ###   ########.fr       */
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
	void			displayAll();
	void			displayOne(int idx);

private:
	void			_takeUserInput(int mode, std::string &input);
	int				_nbContacts;
	Contact 		_tabContact[8];
};



#endif
