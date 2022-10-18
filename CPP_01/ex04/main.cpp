/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:16:40 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/18 23:10:23 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

std::string	getFile(int ac, char *av[]) {

	std::ifstream		infile(av[1]);
	std::string			content = "";
	std::stringstream	buffer;

	if (ac != 4)
		isError("invalid number of arguments");
	if (!infile.is_open())
		return (content);
	buffer << infile.rdbuf();
	content = buffer.str();
	infile.close();
	return (content)
}

void	isError(std::string msg) {

	std::cerr << "error: " << msg << std::endl;
	exit(1);
}

int main(int ac, char *av[]) {

	Replace	

	file = getFile(ac, av);
	if (file == "")
		isError("cannot open file");
	std::cout << file << std::endl;
	outfile.close();
}
