/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 18:36:27 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/08 16:08:14 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal Default constructor called" << std::endl;

	return ;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal Parametric Type constructor called" << std::endl;

	return ;
}

Animal::Animal(Animal const & src)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Animal & Animal::operator=(Animal const & rhs)
{
	std::cout << "Animal Copy assignment operator called" << std::endl;

	if (this != &rhs)
		this->_type = rhs._type;

	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal Destructor called" << std::endl;

	return ;
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal don't make sound" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}
