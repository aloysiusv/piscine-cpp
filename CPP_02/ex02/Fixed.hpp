/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:58:57 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/20 23:24:31 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>
# include "colours.h"

class	Fixed {

	public:
		Fixed();
		Fixed(Fixed const &instance);
		Fixed(int const);
		Fixed(float const);
		~Fixed();
		
		int					getRawBits() const;
		void				setRawBits(int const rawBits);
		int					toInt() const;
		float				toFloat() const;
		Fixed				&operator=(Fixed const &rhs);

		bool				operator>(Fixed const &rhs) const;
		bool				operator<(Fixed const &rhs) const;
		bool				operator>=(Fixed const &rhs) const;
		bool				operator<=(Fixed const &rhs) const;
		bool				operator==(Fixed const &rhs) const;
		bool				operator!=(Fixed const &rhs) const;
	
		Fixed 				operator+(Fixed const &rhs) const;
		Fixed 				operator-(Fixed const &rhs) const;
		Fixed 				operator*(Fixed const &rhs) const;
		Fixed 				operator/(Fixed const &rhs) const;
	
		Fixed 				operator++(int);
		Fixed 				&operator++();
		Fixed 				operator--(int);
		Fixed 				&operator--();

		static Fixed		&min(Fixed &a, Fixed &b);
		static Fixed const	&min(Fixed const &a, Fixed const &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		static Fixed const	&max(Fixed const &a, Fixed const &b);


	private:
		int					_rawBits;
		static const int	_fracBits = 8;
};

std::ostream &operator<<(std::ostream &out, Fixed const &rhs);

#endif
