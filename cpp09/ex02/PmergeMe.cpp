/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 14:43:14 by saguesse          #+#    #+#             */
/*   Updated: 2023/06/20 17:50:23 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

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

const char*	PmergeMe::TooBigException::what() const throw()
{
	return ("Error: Number bigger than an unsigned int");
}
