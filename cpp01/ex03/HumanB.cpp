/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:14:43 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/13 17:49:20 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void	HumanB::setWeapon(Weapon* club)
{
	this->_weapon = club;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
