/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:29:22 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/09 12:25:14 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	std::cout << "Character Default constructor called" << std::endl;

	return ;
}

Character::Character(std::string name) : _name(name)
{
	std::cout << "Character Parametric Name constructor called" << std::endl;

	return ;
}

Character::Character(Character const & src)
{
	std::cout << "Character Copy constructor called" << std::endl;
	*this = src;
	this->_name = src._name;

	return ;
}

Character & Character::operator=(Character const & rhs)
{
	std::cout << "Character Copy assignment operator called" << std::endl;

	if (this != &rhs)
		this->_name = rhs._name;

	return (*this);
}

Character::~Character(void)
{
	std::cout << "Character Destructor called" << std::endl;

	return ;
}
