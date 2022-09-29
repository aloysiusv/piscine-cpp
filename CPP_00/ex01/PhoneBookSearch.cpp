/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookSearch.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 00:50:18 by lrandria          #+#    #+#             */
/*   Updated: 2022/09/29 19:00:10 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string	truncateIfNeeded(std::string const info)
{
	if (info.length > 10)
		return (info.substr(0, 9) + ".");
	return (info);
}
