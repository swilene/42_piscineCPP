/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 23:05:56 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/13 11:59:19 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Zombie.hpp"

void    randomChump(std::string name);
Zombie* newZombie(std::string name);

int	main(void){
	Zombie*	foo = newZombie("Foo");
	foo->announce();
	randomChump("Bar");
	delete foo;
	return (0);
}
