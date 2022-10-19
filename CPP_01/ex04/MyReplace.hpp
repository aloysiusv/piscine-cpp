/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyReplace.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 07:57:53 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/19 09:23:00 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYFILES_HPP
# define MYFILES_HPP

# include <string>
# include <cstring>
# include <cstdlib>
# include <iostream>
# include <fstream>
# include <sstream>
# include "colours.h"

class MyReplace {

	public:
		MyReplace();
		~MyReplace();

		void					setArgs(char *av[]);
		void					openFiles();
		void					replace();

	private:
		std::string				_toFind;
		std::string				_toUse;
		std::string				_fileContent;
		std::ofstream			_outfile;
};

#endif