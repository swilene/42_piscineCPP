/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vectors.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 17:39:00 by saguesse          #+#    #+#             */
/*   Updated: 2023/06/20 17:50:11 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Vectors.hpp"

#include <iostream>
#include <cstdlib>
#include <limits>
#include <algorithm>
#include <cmath>

Vectors::Vectors(void)
{
	std::cout << "Vectors Default constructor called" << std::endl;

	return ;
}

Vectors::Vectors(Vectors const & src)
{
	std::cout << "Vectors Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Vectors & Vectors::operator=(Vectors const & rhs)
{
	std::cout << "Vectors Copy assignment operator called" << std::endl;

	if (this != &rhs)
	{

	}

	return (*this);
}

Vectors::~Vectors(void)
{
	std::cout << "Vectors Destructor called" << std::endl;

	return ;
}

int	PmergeMe::getVSize() const
{
	return (this->_vSize);
}

int	PmergeMe::getPairsVSize() const
{
	return (this->_pairsVSize);
}

void	PmergeMe::createContainer(int argc, char** argv)
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
		_pairsV.push_back(std::make_pair(_v[i], _v[i + 1]));
	_v.erase(_v.begin(), _v.end());
	_pairsVSize = _pairsV.size();
}

void	PmergeMe::sortEachPairs()
{
	for (std::vector<std::pair<unsigned int, unsigned int> >::iterator it = _pairsV.begin(); it < _pairsV.end(); it++) {
		if (it->first > it->second)
			std::swap(it->first, it->second);
	}
}

void	PmergeMe::insert(int left, int midPoint, int right)
{
	int leftIndex = left; // starting index for the left vector
	int	rightIndex = midPoint + 1; // startig index for the right vector
	std::vector<std::pair<unsigned int, unsigned int> >::iterator it = _pairsV.begin();

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
		_pairsV[i] = std::make_pair(it_tmp->first, it_tmp->second);
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

void	PmergeMe::sortContainer()
{
	_v.push_back(it->first);
	for (; it < _pairsV.end(); it++)
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
			while (*it < _pairsV[i - 1].first)
				it++;
			_v.insert(it, _pairsV[i - 1].first);
			i--;
		}
		else {
			prev = j;
			j = pow(2, index) - prev;
			if (j > _pairsV.size())
				j = _pairsV.size();
			index++;
			i = j;
		}
	}
}

void	PmergeMe::insertLast(int start, int end)
{
	int middle = (start+ end) / 2;
	std::cout << "start: " << start << ", end: " << end << ", last: " << _last << ", middle: " << middle << std::endl;
	std::vector<unsigned int>::iterator it = _v.begin();
	if (_last > _v[middle - 1] && _last < _v[middle]) {
		_v.insert(it + middle, _last);
		for (; it < _v.end(); it++)
			std::cout << *it << std::endl;
		return ;
	}
	if (_v[middle] > _last)
		PmergeMe::insertLast(start, middle - 1);
	if (_v[middle] < _last)
		PmergeMe::insertLast(middle + 1, end);
}
