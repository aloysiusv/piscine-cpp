/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:18:25 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/10 15:26:56 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include "colours.h"

class Span
{

	public:
		Span();
		Span(unsigned int N = 0);
		Span(Span const &src);
		~Span();

		Span &				operator=(Span const &rhs);
		
		int					shortestSpan() const;
		int					longestSpan() const;
		void				addSpan(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end);
		void				addNumber(int num);

		class	CantAddMoreException : public std::exception {
			const char*	what() const throw();
		};
		class	NumberException : public std::exception {
			const char*	what() const throw();
		};
		
		
	private:
		unsigned int		_n;
		std::vector<int>	_container;

};

#endif