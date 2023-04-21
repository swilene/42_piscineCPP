#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Default constructor called" << std::endl;

	return ;
}

Cat::Cat(Cat const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Cat & Cat::operator=(Cat const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &rhs)
	{

	}

	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Destructor called" << std::endl;

	return ;
}

// *** Orthodox Canonical Form ***
