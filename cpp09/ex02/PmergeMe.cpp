/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 14:43:14 by saguesse          #+#    #+#             */
/*   Updated: 2023/06/19 18:30:49 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <limits>
#include <algorithm>
#include <cmath>

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

int	PmergeMe::getVSize()
{
	return (this->_vSize);
}

int	PmergeMe::getPvSize()
{
	return (this->_pvSize);
}

void	PmergeMe::createVector(int argc, char** argv)
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
	_vSize = _v.size();
}

void	PmergeMe::makePairs()
{
	if (_vSize % 2) {
		_last = _v.back();
		_v.pop_back();
	}
	for (size_t i = 0; i < _v.size(); i += 2)
		_pv.push_back(std::make_pair(_v[i], _v[i + 1]));
	_v.erase(_v.begin(), _v.end());
	_pvSize = _pv.size();
}

void	PmergeMe::sortEachPairs()
{
	for (std::vector<std::pair<unsigned int, unsigned int> >::iterator it = _pv.begin(); it < _pv.end(); it++) {
		if (it->first > it->second)
			std::swap(it->first, it->second);
	}
}

void	PmergeMe::insert(int left, int midPoint, int right)
{
	int leftIndex = left; // starting index for the left vector
	int	rightIndex = midPoint + 1; // startig index for the right vector
	std::vector<std::pair<unsigned int, unsigned int> >::iterator it = _pv.begin();

	std::vector<std::pair<unsigned int, unsigned int> > tmp;

	while (leftIndex <= midPoint && rightIndex <= right) {
		if ((it + leftIndex)->second <= (it + rightIndex)->second) {
			tmp.push_back(std::make_pair((it + leftIndex)->first, (it + leftIndex)->second));
			leftIndex++;
		}
		else {
			tmp.push_back(std::make_pair((it + rightIndex)->first, (it + rightIndex)->second));
			rightIndex++;
		}
	}
	// copying all elements from left vector to tmp as it is
	while (leftIndex <= midPoint) {
		tmp.push_back(std::make_pair((it + leftIndex)->first, (it + leftIndex)->second));
		leftIndex++;
	}
	// copying all elements from right vector to tmp as it is
	while (rightIndex <= right) {
		tmp.push_back(std::make_pair((it + rightIndex)->first, (it + rightIndex)->second));
		rightIndex++;
	}
	int i = left;
	std::vector<std::pair<unsigned int, unsigned int> >::iterator it_tmp = tmp.begin();
	while (i <= right) {
		_pv[i] = std::make_pair(it_tmp->first, it_tmp->second);
		i++;
		it_tmp++;
	}
}

void	PmergeMe::insertSort(int left, int right)
{
	if (left < right) {
		int midPoint = (left + right) / 2;
		PmergeMe::insertSort(left, midPoint);
		PmergeMe::insertSort(midPoint + 1, right);
		insert(left, midPoint, right);
	}
}

void	PmergeMe::sortVector()
{
	for (std::vector<std::pair<unsigned int, unsigned int> >::iterator ite = _pv.begin(); ite < _pv.end(); ite++)
		std::cout << "(" << ite->first << ", " << ite->second << ")" << std::endl;
	std::vector<std::pair<unsigned int, unsigned int> >::iterator it = _pv.begin();
	_v.push_back(it->first);
	for (; it < _pv.end(); it++)
		_v.push_back(it->second);

	size_t j = 3, index = 3, prev = 1;
	size_t i = j;
	size_t size;
	if (_vSize % 2)
		size = _vSize - 1;
	else
		size = _vSize;
	while (_v.size() != size) {
		std::cout << "i: " << i << ", prev: " << prev << std::endl;
		if (i > prev) {
			std::vector<unsigned int>::iterator it = _v.begin();
			while (*it < _pv[i - 1].first) {
				std::cout << "_v: " << *it << ",	_pv[" << i - 1 << "]: " << _pv[i - 1].first << std::endl;
				it++;
			}
			std::cout << "insert -> " << _pv[i - 1].first << std::endl;
			std::cout << std::endl;
			_v.insert(it, _pv[i - 1].first);
			i--;
		}
		else {
			prev = j;
			j = pow(2, index) - prev;
			if (j > _pv.size())
				j = _pv.size();
			index++;
			i = j;
		}
	}


	for (std::vector<std::pair<unsigned int, unsigned int> >::iterator it = _pv.begin(); it < _pv.end(); it++)
		std::cout << "(" << it->first << ", " << it->second << ")" << std::endl;
	std::cout << "_v:" << std::endl;
	for (std::vector<unsigned int>::iterator ite = _v.begin(); ite < _v.end(); ite++)
		std::cout << *ite << std::endl;
}

void	PmergeMe::insertLast(int start, int end)
{
	int middle = (start+ end) / 2;
	if ()
}

const char*	PmergeMe::TooBigException::what() const throw()
{
	return ("Error: Number bigger than an unsigned int");
}
