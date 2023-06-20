#include "Lists.hpp"

Lists::Lists(void)
{
	std::cout << "Lists Default constructor called" << std::endl;

	return ;
}

Lists::Lists(Lists const & src)
{
	std::cout << "Lists Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Lists & Lists::operator=(Lists const & rhs)
{
	std::cout << "Lists Copy assignment operator called" << std::endl;

	if (this != &rhs)
	{

	}

	return (*this);
}

Lists::~Lists(void)
{
	std::cout << "Lists Destructor called" << std::endl;

	return ;
}
