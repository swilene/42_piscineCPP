/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 18:36:27 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/24 17:48:19 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << "AAnimal Default constructor called" << std::endl;

	return ;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << "AAnimal Parametric constructor called" << std::endl;

	return ;
}

AAnimal::AAnimal(AAnimal const & src)
{
	std::cout << "AAnimal Copy constructor called" << std::endl;
	*this = src;

	return ;
}

AAnimal & AAnimal::operator=(AAnimal const & rhs)
{
	std::cout << "AAnimal Copy assignment operator called" << std::endl;

	if (this != &rhs)
		this->_type = rhs._type;

	return (*this);
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal Destructor called" << std::endl;

	return ;
}

std::string	AAnimal::getType(void) const
{
	return (this->_type);
}
