#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Default constructor called" << std::endl;

	return ;
}

Animal::Animal(Animal const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Animal & Animal::operator=(Animal const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &rhs)
	{

	}

	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Destructor called" << std::endl;

	return ;
}

// *** Orthodox Canonical Form ***
