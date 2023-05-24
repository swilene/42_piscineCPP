/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 17:34:54 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/24 12:11:18 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "iter.hpp"

int	main()
{
	int tab[5] = {0,1,2,3,4};
	std::cout << "Before iter:	";
	for (int i = 0; i < 5; i++)
		std::cout << tab[i] << " ";
	std::cout << std::endl;
	iter(tab, 5, plusOne);
	std::cout << "After iter:	";
	for (int i = 0; i < 5; i++)
		std::cout << tab[i] << " ";
	std::cout << std::endl;
	
	char c[5] = {'a','b','c','d','e'};
	std::cout << "Before iter:	";
	for (int i = 0; i < 5; i++)
		std::cout << c[i] << " ";
	std::cout << std::endl;
	iter(c, 5, plusOne);
	std::cout << "After iter:	";
	for (int i = 0; i < 5; i++)
		std::cout << c[i] << " ";
	std::cout << std::endl;

	return (0);
}
