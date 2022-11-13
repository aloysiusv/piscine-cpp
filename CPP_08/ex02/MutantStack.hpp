/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 22:46:03 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/13 13:48:13 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <cstdlib>
# include <list>
# include <vector>
# include "colours.h"

template <typename T>
class MutantStack : public std::stack<T> {

	public:
		MutantStack() : std::stack<T>() {
			std::cout << BLUE "MutantStack default constructor called!\n" RESET; };
		MutantStack(const MutantStack &src) : std::stack<T>(src) {
			std::cout << BLUE "MutantStack copy constructor called!\n" RESET; };
		~MutantStack() {
			std::cout << RED "MutantStack destructor called!\n" RESET; };
		MutantStack		&operator=(MutantStack const &rhs) {
			std::cout << BLUE "MutantStack assignment operator called!\n" RESET;
			this->std::stack<T>::operator=(rhs);
			return (*this);
		}

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		iterator 		begin() { return (this->c.begin()); }
		iterator 		end() { return (this->c.end()); }
		const_iterator 	begin()	const { return (this->c.begin()); }
		const_iterator 	end() const	{ return (this->c.end()); }
};

#endif 