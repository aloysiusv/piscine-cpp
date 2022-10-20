/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:58:57 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/20 22:55:25 by lrandria         ###   ########.fr       */
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
		
		Fixed				&operator=(Fixed const &instance);
		
		int					getRawBits() const;
		void				setRawBits(int const rawBits);
		int					toInt() const;
		float				toFloat() const;

	private:
		int					_rawBits;
		static const int	_fracBits = 8;
};

std::ostream &operator<<(std::ostream &out, Fixed const &rhs);

#endif
