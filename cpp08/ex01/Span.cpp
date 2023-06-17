/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:18:05 by saguesse          #+#    #+#             */
/*   Updated: 2023/06/17 15:15:03 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include <iostream>
#include <limits>
#include <algorithm>
#include <cstdlib>

Span::Span(void)
{
	std::cout << "Span Default constructor called" << std::endl;

	return ;
}

Span::Span(unsigned int N) : _size(N)
{
	std::cout << "Span Parametric constructor called" << std::endl;

	return ;
}

Span::Span(Span const & src)
{
	std::cout << "Span Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Span & Span::operator=(Span const & rhs)
{
	std::cout << "Span Copy assignment operator called" << std::endl;

	if (this != &rhs)
	{

	}

	return (*this);
}

Span::~Span(void)
{
	std::cout << "Span Destructor called" << std::endl;

	return ;
}

unsigned int	Span::getSize() const
{
	return (this->_size);
}

void	Span::setTab()
{
	this->_tab.insert(this->_tab.begin(), this->_size, -1000 + (rand() % 1000));
}

void	Span::addNumber(int nb)
{
	if (this->_tab.size() == this->_size)
		throw MaxSizeException();
	this->_tab.push_back(nb);
}

unsigned int     Span::shortestSpan()
{
	if (this->_tab.size() < 2) {
		std::cout << "Size: " << this->_tab.size() << " -> ";
		throw LessThanTwoException();
	}
	
	std::sort (this->_tab.begin(), this->_tab.end());
	int min = std::numeric_limits<int>::max();
	for (unsigned int i = 0; i < this->_tab.size() - 1; i++) {
		if (this->_tab[i + 1] - this->_tab[i] < min)
			min = this->_tab[i + 1] - this->_tab[i];
	}

	return (min);
}

unsigned int	Span::longestSpan() const
{
	if (this->_tab.size() < 2) {
		std::cout << "Size: " << this->_tab.size() << " -> ";
		throw LessThanTwoException();
	}
	
	return (*std::max_element(this->_tab.begin(), this->_tab.end()) - *std::min_element(this->_tab.begin(), this->_tab.end()));
}
