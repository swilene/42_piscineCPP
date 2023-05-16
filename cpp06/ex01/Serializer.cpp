/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:21:51 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/16 18:10:47 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void)
{
	std::cout << "Serializer Default constructor called" << std::endl;

	return ;
}

Serializer::Serializer(Serializer const & src)
{
	std::cout << "Serializer Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Serializer & Serializer::operator=(Serializer const & rhs)
{
	std::cout << "Serializer Copy assignment operator called" << std::endl;

	if (this != &rhs)
	{

	}

	return (*this);
}

Serializer::~Serializer(void)
{
	std::cout << "Serializer Destructor called" << std::endl;

	return ;
}
