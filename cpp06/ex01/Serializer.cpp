/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:21:51 by saguesse          #+#    #+#             */
/*   Updated: 2023/06/15 14:12:56 by saguesse         ###   ########.fr       */
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
		*this = rhs;

	return (*this);
}

Serializer::~Serializer(void)
{
	std::cout << "Serializer Destructor called" << std::endl;

	return ;
}

uintptr_t Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
