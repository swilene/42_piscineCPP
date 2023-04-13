/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 13:44:57 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/13 14:58:34 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon & club) : _name(name), _weapon(club)
{
	//this->_name = name;
	//this->_weapon = club;
	return;
}

HumanA::~HumanA(void)
{
	return ;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
