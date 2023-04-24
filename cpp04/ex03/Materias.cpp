/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materias.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 18:00:08 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/24 18:00:18 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materias.hpp"

AMaterias::AMaterias(void)
{
	std::cout << "AMaterias Default constructor called" << std::endl;

	return ;
}

AMaterias::AMaterias(AMaterias const & src)
{
	std::cout << "AMaterias Copy constructor called" << std::endl;
	*this = src;

	return ;
}

AMaterias & AMaterias::operator=(AMaterias const & rhs)
{
	std::cout << "AMaterias Copy assignment operator called" << std::endl;

	if (this != &rhs)
	{

	}

	return (*this);
}

AMaterias::~AMaterias(void)
{
	std::cout << "AMaterias Destructor called" << std::endl;

	return ;
}
