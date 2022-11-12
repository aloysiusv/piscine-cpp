/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:18:25 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/12 23:08:52 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <bits/stdc++.h>
# include "colours.h"

class Span {

	public:
		Span();
		Span(uint n);
		Span(Span const &src);
		~Span();

		Span				&operator=(Span const &rhs);
		
		int					shortestSpan() const;
		int					longestSpan() const;
		void				addNumber(int num);
		void				addSpecNumbers(std::vector<int> vector);
		void				addRange(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end);
		void				displayContainer();
	
		class	IsFullException : public std::exception {
			const char*	what() const throw();
		};
		class	NoValidDistanceException : public std::exception {
			const char*	what() const throw();
		};
		class	InvalidRangeException : public std::exception {
			const char*	what() const throw();
		};

	private:
		uint				_n;
		std::vector<int>	_container;
};

#endif