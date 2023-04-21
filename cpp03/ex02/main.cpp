/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 21:07:45 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/21 12:26:30 by saguesse         ###   ########.fr       */
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
	FragTrap	jim(loulou);

	std::cout << "\n";

	riri.attack("Gripsou");
	riri.printPoints();
	riri.takeDamage(2);
	riri.printPoints();
	riri.beRepaired(3);
	riri.printPoints();

	std::cout << "\n";

	fifi.attack("Rapetou");
	fifi.printPoints();
	fifi.takeDamage(20);
	fifi.printPoints();
	fifi.beRepaired(30);
	fifi.printPoints();
	fifi.guardGate();

	std::cout << "\n";

	loulou.attack("Miss Tick");
	loulou.printPoints();
	loulou.takeDamage(30);
	loulou.printPoints();
	loulou.beRepaired(25);
	loulou.printPoints();
	loulou.highFivesGuys();

	std::cout << "\n";

	return (0);
}
