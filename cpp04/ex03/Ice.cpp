/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:13:42 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/08 17:21:54 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Ice Default constructor called" << std::endl;

	return ;
}

Ice::Ice(Ice const & src) : AMateria(src)
{
	std::cout << "Ice Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Ice & Ice::operator=(Ice const & rhs)
{
	std::cout << "Ice Copy assignment operator called" << std::endl;

	AMateria::operator=(rhs);

	return (*this);
}

Ice::~Ice(void)
{
	std::cout << "Ice Destructor called" << std::endl;

	return ;
}

Ice*	Ice::clone(void) const
{
	Ice*	ice = this;

	return (ice);
}
