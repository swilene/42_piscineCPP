#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Default constructor called" << std::endl;

	return ;
}

Dog::Dog(Dog const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Dog & Dog::operator=(Dog const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &rhs)
	{

	}

	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Destructor called" << std::endl;

	return ;
}

// *** Orthodox Canonical Form ***
