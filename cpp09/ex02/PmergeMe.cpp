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
