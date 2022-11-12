/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:20:19 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/12 23:17:47 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/* ==========================================================================
								COPLIEN FORM 
   ========================================================================== */

Span::Span() : _n(0), _container() {
	std::cout << BLUE "Span default constructor called!\n" RESET;
}

Span::Span(uint n) : _n(n), _container() {
	std::cout << BLUE "Span parameterised constructor called!\n" RESET;
}

Span::Span(const Span &src) : _n(src._n), _container() {
	
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

const char *Span::IsFullException::what() const throw() {
	return ("\e[0;38;5;166mException: it is at full capacity! :(\e[0m");
}

const char *Span::NoValidDistanceException::what() const throw() {
	return ("\e[0;38;5;166mException: couldn't calculate span! :(\e[0m");
}

const char *Span::InvalidRangeException::what() const throw() {
	return ("\e[0;38;5;166mException: range is invalid! :(\e[0m");
}

/* ==========================================================================
								MEMBER FUNCTIONS 
   ========================================================================== */

void	Span::addNumber(int num) {

	if (_container.size() >= _n)
		throw Span::IsFullException();
	_container.push_back(num);
}

void	Span::addRange(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end) {

	int	nbElem = end - begin;
	int	availableSpace = _n - _container.size();

	if (nbElem > availableSpace)
		throw Span::InvalidRangeException();
	srand(time(NULL));
	_container.insert(this->_container.end(), begin, end);
}

void	Span::addSpecNumbers(std::vector<int> vector) {

	for (uint i = 0; i < vector.size(); i++)
		addNumber(vector[i]);
}

void	Span::displayContainer() {

	std::cout << "VECTOR CONTENT => ";
	for (size_t i = 0; i < _container.size(); i++)
		std::cout << "[" <<_container[i] << "] ";
	std::cout << std::endl << std::endl;
}

int		Span::shortestSpan() const {

	std::vector<int>	cpy = _container;
	size_t				i;
	int					shortest;

	if (_container.size() < 2)
		throw NoValidDistanceException();
	sort(cpy.begin(), cpy.end());
	i = 0;
	shortest = cpy[i + 1] - cpy[i];
	for (; i < _container.size() - 1; i++)
		shortest = std::min(shortest, (cpy[i + 1] - cpy[i]));
	std::cout << "Shortest span is: ";
	return (shortest);
}

int 	Span::longestSpan() const {

	int	min;
	int	max;

	if(_container.size() < 2)
		throw NoValidDistanceException();
	else {
		min = *min_element(_container.begin(), _container.end());
		max = *max_element(_container.begin(), _container.end());
	}
	std::cout << "Longest span is: ";
	return (max - min);
}
