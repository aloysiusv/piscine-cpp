/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:16:40 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/19 09:24:26 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

// std::string	getFile(int ac, char *av[]) {

// 	std::ifstream		infile(av[1]);
// 	std::string			content = "";

// 	if (ac != 4)
// 		isError("invalid number of arguments");
// 	
// 	infile.close();
// 	return (content)
// }

// void	isError(std::string msg) {

// 	std::cerr << "error: " << msg << std::endl;
// 	exit(1);
// }

void	checkArgs(int ac, char *av[]) {

	if (ac != 4) { 
		std::cerr << "error: invalid number of arguments" << std::endl;
		std::exit(1);
	}
	if (av[1] == "" || av[2] == "" || av[3] == "" || av[2] == av[3]) {
		std::cerr << "error: invalid arguments" << std::endl;
		std::exit(1);
	}
}

int main(int ac, char *av[]) {

	MyReplace	x;

	checkArgs(ac, av);
	x.setInfile(av[1]);
	file = getFile(ac, av);
	if (file == "")
		isError("cannot open file");
	std::cout << file << std::endl;
	outfile.close();
}
