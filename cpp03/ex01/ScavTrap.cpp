/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 09:44:12 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/20 18:51:52 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name, int hitPoints, int energyPoints,
		int attackDamage) : ClapTrap(name, hitPoints, energyPoints, attackDamage)
{
	std::cout << "Default ScavTrap " << name << " constructor called" << std::endl;

	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src)
{
	std::cout << "Copy ScavTrap " << this->_name << " constructor called" << std::endl;

	return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	std::cout << "Copy ScavTrap " << this->_name
		<< " assignment operator called" << std::endl;

	ClapTrap::operator=(rhs);

	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor ScavTrap " << this->_name << " called" << std::endl;

	return ;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0 || this->_hitPoints > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target 
			<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else if (this->_energyPoints < 1)
		std::cout << "ScavTrap " << this->_name << " has no more energy..." << std::endl;
	else if (this->_hitPoints < 1)
		std::cout << "ScavTrap " << this->_name << " is dead..." << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " entered gate keeper mode."
		<< std::endl;
}
