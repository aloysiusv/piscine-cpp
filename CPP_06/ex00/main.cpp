/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:45:36 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/09 08:41:47 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

int main(int ac, char **av) {

	if (ac != 2 || !strcmp(av[1], "")) {
		std::cerr << "error: invalid arguments\n";
		return (EXIT_FAILURE);
	}
	switch (getType(av[1])) {

		case 0 :
			convertFromChar(av[1]);
			break ;	
		case 1 :
			convertFromInt(av[1]);
			break ;	
		case 2 :
			convertFromFloat(av[1]);
			break ;	
		case 3 :
			convertFromDouble(av[1]);
			break ;
		default :
			cannotDisplay();
	}
	return (EXIT_SUCCESS);
}
