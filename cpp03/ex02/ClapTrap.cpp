/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 20:19:41 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/21 12:11:32 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Default ClapTrap constructor called" << std::endl;

	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10),
	_energyPoints(10), _attackDamage(0)
{
	std::cout << "Default name ClapTrap " << name << " constructor called" << std::endl;

	return ;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	std::cout << "Copy ClapTrap " << this->_name << " constructor called" << std::endl;
	*this = src;

	return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout << "Copy ClapTrap " << this->_name
		<< " assignment operator called" << std::endl;

	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}

	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor ClapTrap " << this->_name << " called" << std::endl;

	return ;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target 
			<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else if (this->_energyPoints < 1)
		std::cout << "ClapTrap " << this->_name << " has no more energy..." << std::endl;
	else if (this->_hitPoints < 1)
		std::cout << "ClapTrap " << this->_name << " is dead..." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " takes damage, losing "
			<< amount << " life points!" << std::endl;
		if ((int)amount > this->_hitPoints)
			this->_hitPoints = 0;
		else
			this->_hitPoints -= amount;
	}
	else if (this->_energyPoints < 1)
		std::cout << "ClapTrap " << this->_name << " has no more energy..." << std::endl;
	else if (this->_hitPoints < 1)
		std::cout << "ClapTrap " << this->_name << " is dead..." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " repairs itself, gaining "
			<< amount << " hit points back!" << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints--;
	}
	else if (this->_energyPoints < 1)
		std::cout << "ClapTrap " << this->_name << " has no more energy..." << std::endl;
	else if (this->_hitPoints < 1)
		std::cout << "ClapTrap " << this->_name << " is dead..." << std::endl;
}

void	ClapTrap::printPoints(void)
{
	std::cout << "ClapTrap " << this->_name << " now has " << this->_hitPoints
		<< " hit points and " << this->_energyPoints << " energy points."
		<< std::endl;
}
