/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:46:45 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/04 15:58:03 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <cstdlib>
# include <iomanip>
# include <string>
# include <cstring>
# include <stdexcept>
# include <limits.h>
# include <cmath>
# include <errno.h>

class Convert
{
	public:
		Convert();
		Convert(std::string input);
		Convert(Convert const &src);

		Convert &operator=(Convert const &rhs);

		~Convert();
			
		void		convertChar();
		void		convertInt();
		void		convertFloat();
		void		convertDouble();

		class EmptyStringException : public std::exception {
			char const *error() const throw();
		};
		
		class NonPrintableException : public std::exception {
			char const *error() const throw();
		};

		class OverflowException : public std::exception {
			char const *error() const throw();
		};

	private:
		std::string	_input;
};

#endif
