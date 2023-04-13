/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 22:53:16 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/13 11:16:34 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " died..." << std::endl; 
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
