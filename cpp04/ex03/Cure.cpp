/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:14:20 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/09 12:11:17 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
{
	std::cout << "Cure Default constructor called" << std::endl;

	return ;
}

Cure::Cure(Cure const & src)
{
	std::cout << "Cure Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Cure & Cure::operator=(Cure const & rhs)
{
	std::cout << "Cure Copy assignment operator called" << std::endl;

	if (this != &rhs)
	{

	}

	return (*this);
}

Cure::~Cure(void)
{
	std::cout << "Cure Destructor called" << std::endl;

	return ;
}

Cure *	Cure::clone(void) const
{
	Cure* cure = new Cure;

	return (cure);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
