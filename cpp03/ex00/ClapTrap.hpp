/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 20:04:37 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/21 14:30:56 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
	public:
		ClapTrap(void); //default constructor
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src); //copy constructor
		ClapTrap & operator=(ClapTrap const & rhs); //copy assignment operator
		~ClapTrap(void); //destructor

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	printPoints(void);

	protected:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
};

#endif
