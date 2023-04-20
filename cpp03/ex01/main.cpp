/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 21:07:45 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/20 18:52:37 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	riri("Riri", 10, 10, 0);
	ScavTrap	fifi("Fifi", 100, 50, 20);

	riri.attack("Gripsou");
	riri.printPoints();
	riri.takeDamage(2);
	riri.printPoints();
	riri.beRepaired(3);
	riri.printPoints();

	fifi.attack("Rapetou");
	fifi.printPoints();
	fifi.takeDamage(2);
	fifi.printPoints();
	fifi.beRepaired(3);
	fifi.printPoints();
	fifi.guardGate();

	return (0);
}
