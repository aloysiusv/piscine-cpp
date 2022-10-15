/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:27:40 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/13 16:39:12 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp" 

Contact::Contact() {}

Contact::~Contact() {}
 
void	Contact::setInfo(int mode, std::string input) {

    switch (mode) {

        case FIRSTNAME:
            _firstName = input;
            break;
        case LASTNAME:
            _lastName = input;
            break;
        case NICKNAME:
            _nickName = input;
            break;
        case NUM:
            _number = input;
            break;
        case SECRET:
            _secret = input;
            break;
    
        default:
            break;
    }

}

std::string	Contact::getInfo(int mode) {

    switch (mode) {

        case FIRSTNAME:
            return (_firstName);
        case LASTNAME:
            return (_lastName);
        case NICKNAME:
            return (_nickName);
        case NUM:
            return (_number);
        case SECRET:
            return (_secret);
    
        default:
            break;
    }
    return (NULL);
}
