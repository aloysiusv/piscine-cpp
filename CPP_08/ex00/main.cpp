/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:12:31 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/10 15:17:49 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EasyFind.hpp"

int main(void)
{
	std::vector<int>::const_iterator	i;
	std::vector<int> 					elem;

	elem.push_back(4);
	elem.push_back(16);
	elem.push_back(7);
	elem.push_back(2);

	try 
	{
		i = easyfind(elem, 0);
		std::cout << *i << std::endl;
	}
	catch (std::exception &e){ 
		std::cerr << e.what() << '\n';
	}

	try
	{
		i = easyfind(elem, 16);
		std::cout << *i << std::endl;
	}
	catch (std::exception &e) { 
			std::cerr << e.what() << '\n';
	}
	return(EXIT_SUCCESS);
}
