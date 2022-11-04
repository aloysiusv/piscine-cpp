/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:45:36 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/04 16:02:03 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

void	launchConversion(char *av) {

	// std::string const typeStr[4] = {"char", "int", "float", "double"};
	// int			const typeCode[4] = {0, 1, 2, 3} 

	DO ENUM
	Convert transform(av[1]);

		switch (ENUMCODE)
		{
			case 1 : {
				transform.toFloat();
				break;
			}
			case 2 : {
				transform.toDouble();
				break;
			}
			case 3 : {
				transform.toInt();
				break;
			}
			case 4 :
			{
				transform.toChar();
				break;
			}
			default :
				IMPOSSIBLE
}


bool	checkArg(int ac, char **av) {

	if (ac != 2)
		//error
	// if (av[1]) = empty str...
	// if non printable...
	return (true);
}

int main(int ac, char **av) {

	if (checkArg(ac, av) == true)
		launchConversion(av[1]);
	else
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}