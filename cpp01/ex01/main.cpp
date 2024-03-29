/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 23:05:56 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/17 11:13:10 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int	main(void)
{
	int	N = 7;
	Zombie*	zombies = zombieHorde(N, "Foo");
	for (int i = 0; i < N; i++)
		zombies[i].announce();
	delete [] zombies;
	return (0);
}
