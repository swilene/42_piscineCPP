/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 18:00:08 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/08 17:10:52 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"

AMateria::AMateria(void)
{
	std::cout << "AMateria Default constructor called" << std::endl;

	return ;
}

AMaterie::AMateria(std::string const & type) : _type(type)
{
	std::cout << "AMateria Parametric constructor called" << std::endl;

	return ;
}


AMateria::AMateria(AMateria const & src)
{
	std::cout << "AMateria Copy constructor called" << std::endl;
	*this = src;

	return ;
}

AMateria & AMateria::operator=(AMateria const & rhs)
{
	std::cout << "AMateria Copy assignment operator called" << std::endl;

	if (this != &rhs)
		this->_type = rhs._type;

	return (*this);
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria Destructor called" << std::endl;

	return ;
}

std::string const & AMateria::getType(void)
{
	return (this->_type);
}

void	AMaterie::use(ICharacter& target)
{
	
}
