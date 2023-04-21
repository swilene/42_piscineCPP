/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 21:07:45 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/21 11:39:42 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	claptrap("Riri");

	std::cout << "\n";

	claptrap.attack("Gripsou");
	claptrap.printPoints();
	claptrap.takeDamage(2);
	claptrap.printPoints();
	claptrap.beRepaired(3);
	claptrap.printPoints();

	std::cout << "\n";

	return (0);
}
