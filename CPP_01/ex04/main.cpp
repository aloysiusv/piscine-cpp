/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:16:40 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/20 15:33:36 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

static void replace(std::string toFind, std::string toUse,
					std::ifstream* infile, std::ofstream* outfile) {

	std::size_t	i;
	std::string	line;
	
	while ((*infile).eof() == false) {
		std::getline(*infile, line);
		i = line.find(toFind);
		while (i != std::string::npos) {
			line.erase(i, toFind.length());
			line.insert(i, toUse);			
			i = line.find(toFind); }
		*outfile << line;
		if (!(*infile).eof())
			*outfile << std::endl; }		
}

static void	openFiles(std::string fileName,
						std::ifstream* infile, std::ofstream* outfile) {

	std::string		newName = fileName + ".replace";
	
	(*infile).open(fileName.c_str());
	if (!(*infile).is_open()) {
		std::cerr << "error: couldn't open file" << std::endl;
		std::exit(1); }
	(*outfile).open(newName.c_str());
	if (!(*outfile).is_open()) {
		std::cerr << "error: couldn't open file" << std::endl;
		(*infile).close();
		std::exit(1); }
}

static void	checkArgs(int ac, char *av[]) {

	if (ac != 4) { 
		std::cerr << "error: invalid number of arguments" << std::endl;
		std::exit(1); }
	if (av[1] == NULL || av[2] == NULL || av[3] == NULL || av[2] == av[3]) {
		std::cerr << "error: invalid arguments" << std::endl;
		std::exit(1); }
}

int main(int ac, char *av[]) {

	std::ifstream	infile;
	std::ofstream	outfile;

	checkArgs(ac, av);
	openFiles(av[1], &infile, &outfile);
	replace(av[2], av[3], &infile, &outfile);
	infile.close();
	outfile.close();
	return (EXIT_SUCCESS);
}
