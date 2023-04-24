/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 18:45:16 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/24 17:46:09 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : AAnimal()
{
	std::cout << "Cat Default constructor called" << std::endl;
	_brain = new Brain;

	return ;
}

Cat::Cat(std::string type) : AAnimal(type)
{
	std::cout << "Cat Parametric constructor called" << std::endl;
	_brain = new Brain;
}

Cat::Cat(Cat const & src) : AAnimal(src)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	this->_brain = new Brain(*src._brain);

	return ;
}

Cat & Cat::operator=(Cat const & rhs)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;

	if (this != &rhs)
	{
		this->_type = rhs._type;
		this->_brain = new Brain(*rhs._brain);
	}
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor called" << std::endl;
	delete _brain;

	return ;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}

Brain&	Cat::getBrain(void)
{
	return (*this->_brain);
}
