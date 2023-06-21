/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Deques.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:46:49 by saguesse          #+#    #+#             */
/*   Updated: 2023/06/21 17:42:16 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Deques.hpp"

#include <deque>
#include <iostream>
#include <cstdlib>
#include <limits>
#include <algorithm>
#include <cmath>

Deques::Deques(void)
{
	std::cout << "Deques Default constructor called" << std::endl;

	return ;
}

Deques::Deques(Deques const & src)
{
	std::cout << "Deques Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Deques & Deques::operator=(Deques const & rhs)
{
	std::cout << "Deques Copy assignment operator called" << std::endl;

	if (this != &rhs)
	{

	}

	return (*this);
}

Deques::~Deques(void)
{
	std::cout << "Deques Destructor called" << std::endl;

	return ;
}

int	Deques::getDSize() const
{
	return (this->_dSize);
}

int	Deques::getPairsDSize() const
{
	return (this->_pairsDSize);
}

void	Deques::createContainer(int argc, char** argv)
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
						_d.push_back(static_cast<unsigned int>(ui));
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
				_d.push_back(static_cast<unsigned int>(ui));
			size = 0;
		}
	}
	_dSize = _d.size();
}

void	Deques::makePairs()
{
	if (_dSize % 2) {
		_last = _d.back();
		_d.pop_back();
	}
	for (size_t i = 0; i < _d.size(); i += 2)
		_pairsD.push_back(std::make_pair(_d[i], _d[i + 1]));
	_d.erase(_d.begin(), _d.end());
	_pairsDSize = _pairsD.size();
}

void	Deques::sortEachPairs()
{
	for (std::deque<std::pair<unsigned int, unsigned int> >::iterator it = _pairsD.begin(); it < _pairsD.end(); it++) {
		if (it->first > it->second)
			std::swap(it->first, it->second);
	}
}

void	Deques::insert(int left, int midPoint, int right)
{
	int leftIndex = left; // starting index for the left deque
	int	rightIndex = midPoint + 1; // startig index for the right deque
	std::deque<std::pair<unsigned int, unsigned int> >::iterator it = _pairsD.begin();

	std::deque<std::pair<unsigned int, unsigned int> > tmp;

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
	// copying all elements from left deque to tmp as it is
	while (leftIndex <= midPoint) {
		tmp.push_back(std::make_pair((it + leftIndex)->first, (it + leftIndex)->second));
		leftIndex++;
	}
	// copying all elements from right deque to tmp as it is
	while (rightIndex <= right) {
		tmp.push_back(std::make_pair((it + rightIndex)->first, (it + rightIndex)->second));
		rightIndex++;
	}
	int i = left;
	std::deque<std::pair<unsigned int, unsigned int> >::iterator it_tmp = tmp.begin();
	while (i <= right) {
		_pairsD[i] = std::make_pair(it_tmp->first, it_tmp->second);
		i++;
		it_tmp++;
	}
}

void	Deques::insertSort(int left, int right)
{
	if (left < right) {
		int midPoint = (left + right) / 2;
		Deques::insertSort(left, midPoint);
		Deques::insertSort(midPoint + 1, right);
		insert(left, midPoint, right);
	}
}

void	Deques::sortContainer()
{
	std::deque<std::pair<unsigned int, unsigned int> >::iterator it = _pairsD.begin();
	std::cout << "it->first = " << it->first << std::endl;
	_d.push_back(it->first);
	for (; it < _pairsD.end(); it++)
		_d.push_back(it->second);

	std::cout << "deque :" << std::endl;
	for (std::deque<unsigned int>::iterator it = _d.begin(); it != _d.end(); it++)
		std::cout << *it << std::endl;


	size_t j = 3, index = 3, prev = 1;
	size_t i = j;
	size_t size;
	if (_dSize % 2)
		size = _dSize - 1;
	else
		size = _dSize;
	while (_d.size() != size) {
		std::cout << "i: " << i << ", prev: " << prev << std::endl;
		if (i > prev) {
			std::deque<unsigned int>::iterator it = _d.begin();
			while (*it < _pairsD[i - 1].first)
				it++;
			_d.insert(it, _pairsD[i - 1].first);
			i--;
		}
		else {
			prev = j;
			j = pow(2, index) - prev;
			if (j > _pairsD.size())
				j = _pairsD.size();
			index++;
			i = j;
		}
	}
}

void	Deques::insertLast(int start, int end)
{
	int middle = (start+ end) / 2;
	std::cout << "start: " << start << ", end: " << end << ", last: " << _last << ", middle: " << middle << std::endl;
	std::deque<unsigned int>::iterator it = _d.begin();
	if (_last > _d[middle - 1] && _last < _d[middle]) {
		_d.insert(it + middle, _last);
		for (; it < _d.end(); it++)
			std::cout << *it << std::endl;
		return ;
	}
	if (_d[middle] > _last)
		Deques::insertLast(start, middle - 1);
	if (_d[middle] < _last)
		Deques::insertLast(middle + 1, end);
}
