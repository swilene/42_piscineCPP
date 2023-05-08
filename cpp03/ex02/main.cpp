/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 21:07:45 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/08 15:28:44 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap	riri("Riri");
	ScavTrap	fifi("Fifi");
	FragTrap	loulou("Loulou");

	std::cout << std::endl;

	riri.attack("Gripsou");
	riri.printPoints();
	riri.takeDamage(2);
	riri.printPoints();
	riri.beRepaired(3);
	riri.printPoints();

	std::cout << std::endl;

	fifi.attack("Rapetou");
	fifi.printPoints();
	fifi.takeDamage(20);
	fifi.printPoints();
	fifi.beRepaired(30);
	fifi.printPoints();
	fifi.guardGate();

	std::cout << std::endl;

	loulou.attack("Miss Tick");
	loulou.printPoints();
	loulou.takeDamage(30);
	loulou.printPoints();
	loulou.beRepaired(25);
	loulou.printPoints();
	loulou.highFivesGuys();

	std::cout << std::endl;

	return (0);
}
