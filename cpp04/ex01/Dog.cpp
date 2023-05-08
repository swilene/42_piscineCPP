/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 18:42:21 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/08 16:20:54 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Dog Default constructor called" << std::endl;
	_brain = new Brain;

	return ;
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "Dog Parametric Type constructor called" << std::endl;
	_brain = new Brain;

	return ;
}

Dog::Dog(Dog const & src) : Animal(src)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	this->_brain = new Brain(*src._brain);

	return ;
}

Dog & Dog::operator=(Dog const & rhs)
{
	std::cout << "Dog Copy assignment operator called" << std::endl;

	if (this != &rhs)
	{
		this->_type = rhs._type;
		this->_brain = new Brain(*rhs._brain);
	}

	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor called" << std::endl;
	delete _brain;

	return ;
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof" << std::endl;
}

Brain&	Dog::getBrain(void)
{
	return (*this->_brain);
}
