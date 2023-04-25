/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:29:22 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/25 18:06:35 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	std::cout << "Character Default constructor called" << std::endl;

	return ;
}

Character::Character(Character const & src)
{
	std::cout << "Character Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Character & Character::operator=(Character const & rhs)
{
	std::cout << "Character Copy assignment operator called" << std::endl;

	if (this != &rhs)
	{

	}

	return (*this);
}

Character::~Character(void)
{
	std::cout << "Character Destructor called" << std::endl;

	return ;
}
