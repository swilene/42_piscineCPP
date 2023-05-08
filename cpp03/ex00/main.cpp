/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 21:07:45 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/08 15:29:39 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	claptrap("Riri");

	std::cout << std::endl;

	claptrap.attack("Gripsou");
	claptrap.printPoints();
	claptrap.takeDamage(6);
	claptrap.printPoints();
	claptrap.beRepaired(3);
	claptrap.printPoints();
	claptrap.takeDamage(9);
	claptrap.printPoints();
	claptrap.beRepaired(3);
	claptrap.printPoints();

	std::cout << std::endl;

	return (0);
}
