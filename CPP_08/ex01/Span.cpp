/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:20:19 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/10 15:31:44 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/* ==========================================================================
								COPLIEN AFORM 
   ========================================================================== */

Span::Span() : _n(0), _container() {
	std::cout << BLUE "Span default constructor called!\n" RESET;
}

Span::Span(unsigned int N) : _n(N), _container() {
	std::cout << BLUE "Span parameterised constructor called!\n" RESET;
}

Span::Span( const Span & src ) : _n(src._n), _container() {
	
	std::cout << BLUE "Span copy constructor called!\n" RESET;
	*this = src;
}

Span::~Span() {
	std::cout << RED "Span destructor called!\n" RESET;
}


Span &Span::operator=(Span const &rhs) {
	
	if (this != &rhs ) {
		_n = rhs._n;
		_container = rhs._container;
	}
	return (*this);
}

/* ==========================================================================
								EXCEPTIONS 
   ========================================================================== */

const char *Span::NumberException::what() const throw() {
	return ("\e[0;38;5;166mException: couldn't calculate span! :(\e[0m\n");
}

const char *Span::CantAddMoreException::what() const throw() {
	return ("\e[0;38;5;166mException: it is at full capacity! :(\e[0m");
}

/* ==========================================================================
								MEMBER FUNCTIONS 
   ========================================================================== */

void	Span::addNumber(int nbr)
{
	if (_container.size() >= _n)
		throw Span::CantAddMoreException();
	_container.push_back(nbr);
}

int	Span::shortestSpan(void) const
{
	size_t i;
	std::vector<int> tmp = _container;

	if(_container.size() <= 1)
		throw NumberException();
	sort(tmp.begin(), tmp.end());
	
	int j = tmp[1] - tmp[0];
	
	for(i = 0; i + 1 < tmp.size(); ++i)
		if (tmp[i + 1] - tmp[i] < j)
			j = std::abs(tmp[i + 1] - tmp[i]);
	return (j);
}

void	Span::addSpan(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end)
{
	if (static_cast<unsigned int>(end - begin) > (_n - _container.size()))
		throw Span::CantAddMoreException();
	else 
		_container.insert(_container.end(), begin, end);
}

int Span::longestSpan(void) const
{
	std::vector<int>::const_iterator i;
	std::vector<int>::const_iterator j;

	if(_container.size() <= 1)
		throw NumberException();
	i = std::min_element(_container.begin(), _container.end());
	j = std::max_element(_container.begin(), _container.end());

	return (*j - *i);
}
