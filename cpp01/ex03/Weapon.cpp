/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 13:35:05 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/13 16:26:26 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

std::string const	Weapon::getType(void)
{
	return (this->_type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}
