/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 00:12:12 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/11 17:00:37 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>
#include <cstdio>
#include <stdlib.h>
#include "colours.h"

int main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string		*stringPTR = &str;
	std::string 	&stringREF = str;
	
	std::cout << L_YELLOW "Address str = " RESET << &str << std::endl
			  << L_YELLOW "Address stringPTR = " RESET << stringPTR << std::endl
			  << L_YELLOW "Address stringREF = " RESET << &stringREF << std::endl
			  << CYAN "========================================" RESET << std::endl
			  << MAGENTA "Value str = " RESET << str << std::endl
			  << MAGENTA "Value stringPTR = " RESET << *stringPTR << std::endl
			  << MAGENTA "Value stringREF = " RESET << stringREF << std::endl;
	return (EXIT_SUCCESS);
}