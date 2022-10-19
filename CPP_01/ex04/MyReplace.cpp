/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyReplace.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 07:58:15 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/19 09:30:42 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyReplace.hpp"

MyReplace::MyReplace() {}

MyReplace::~MyReplace() {}

void			MyReplace::openFiles(char *av[]) {

	std::ifstream		infile(av[1]);
	std::stringstream	buf1;
	std::string			buf2;

	if (!infile.is_open()) { std::cerr << "error: can't open source file" << std::endl; }
	buf1 << infile.rdbuf();
	_fileContent = buf1.str();
	buf2 = av[1];
	_outfile.open(buf2 += ".replace");
	if (!_outfile.is_open()) { std::cerr << "error: can't open new file" << std::endl; }
	_toFind = av[2];
	_toUse = av[3];
}

void			MyReplace::replace() {
	
	std::size_t     i;
	std::string     line;
	
	while (_content.eof() == false) {

		std::getline(_content, line);
		i = line.find(_toFind);
		while (i != std::string::npos) {
			
			line.erase(i, _toFind.size());
			line.insert(i, _toUse);			
			i = line.find(_toFind);
		}
		_outfile << line;
		if (!_content.eof())
			_outfile << std::endl;
	}
}
