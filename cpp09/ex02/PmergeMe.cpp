/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 14:43:14 by saguesse          #+#    #+#             */
/*   Updated: 2023/06/17 19:41:02 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <limits>
#include <algorithm>

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void)
{
	std::cout << "PmergeMe Default constructor called" << std::endl;

	return ;
}

PmergeMe::PmergeMe(PmergeMe const & src)
{
	std::cout << "PmergeMe Copy constructor called" << std::endl;
	*this = src;

	return ;
}

PmergeMe & PmergeMe::operator=(PmergeMe const & rhs)
{
	std::cout << "PmergeMe Copy assignment operator called" << std::endl;

	if (this != &rhs)
	{

	}

	return (*this);
}

PmergeMe::~PmergeMe(void)
{
	std::cout << "PmergeMe Destructor called" << std::endl;

	return ;
}

void	PmergeMe::creatingVector(int argc, char** argv)
{
	long unsigned int ui;
	size_t size = 0;
	std::string str, nb;

	for (int i = 1; i < argc; i++) {
		size_t j = 0;
		str = static_cast<std::string>(argv[i]);
		for (; j < str.size(); j++) {
			if (str[j] != ' ') {
				size++;
			}
			else {
				std::cout << "ici" << std::endl;
				if (size) {
					nb = str.substr(j - size, size);
					ui = strtoul(nb.c_str(), NULL, 0);
					if (ui > std::numeric_limits<unsigned int>::max())
						throw TooBigException();
					else
						_v.push_back(static_cast<unsigned int>(ui));
					size = 0;
				}
			}
		}
		if (size) {
			nb = str.substr(j - size, size);
			ui = strtoul(nb.c_str(), NULL, 0);
			if (ui > std::numeric_limits<unsigned int>::max())
				throw TooBigException();
			else
				_v.push_back(static_cast<unsigned int>(ui));
			size = 0;
		}
	}
}

void	PmergeMe::makingPairs()
{
	if (_v.size() / 2)
		_last = _v.back();
	for (size_t i = 0; i < _v.size(); i += 2)
		_pv.push_back(std::make_pair(_v[i], _v[i + 1]));
	_v.erase(_v.begin(), _v.end());
}

void	PmergeMe::sortingPairs()
{
	for (std::vector<std::pair<unsigned int, unsigned int> >::iterator it = _pv.begin(); it < _pv.end(); it++) {
		if (it->first > it->second)
			std::swap(it->first, it->second);
	}

}

const char*	PmergeMe::TooBigException::what() const throw()
{
	return ("Error: Number bigger than an unsigned int");
}
