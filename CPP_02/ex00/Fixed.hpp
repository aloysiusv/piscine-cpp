/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:58:57 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/26 09:38:26 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include "colours.h"

class	Fixed {

	public:
		Fixed();
		Fixed(Fixed const &copy);
		~Fixed();
		
		Fixed				&operator=(Fixed const &rhs);
		
		int					getRawBits() const;
		void				setRawBits(int const rawBits);

	private:
		int					_rawBits;
		static const int	_fracBits = 8;
};

#endif
