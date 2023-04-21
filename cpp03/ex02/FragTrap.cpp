/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 11:42:10 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/21 12:34:37 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "Default FragTrap constructor called" << std::endl;
	
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Default name FragTrap "<< name << " constructor called" << std::endl;

	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	return ;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src)
{
	std::cout << "Copy FragTrap " << this->_name << " constructor called" << std::endl;

	return ;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
	std::cout << "Copy FragTrap " << this->_name
		<< " assignment operator called" << std::endl;

	ClapTrap::operator=(rhs);

	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor FragTrap " << this->_name << " called" << std::endl;

	return ;
}

void	FragTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0 || this->_hitPoints > 0)
	{
		std::cout << "FragTrap " << this->_name << " attacks " << target 
			<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else if (this->_energyPoints < 1)
		std::cout << "FragTrap " << this->_name << " has no more energy..." << std::endl;
	else if (this->_hitPoints < 1)
		std::cout << "FragTrap " << this->_name << " is dead..." << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " wanna high five!" << std::endl;

	return ;
}
