/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 14:55:37 by saguesse          #+#    #+#             */
/*   Updated: 2023/06/08 12:18:03 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <vector>
#include <list>
#include <deque>
#include <iostream>

int	main()
{
	//std::vector<int> tab;
	//std::list<int> tab;
	std::deque<int> tab;
	int res, nb = 42;

	srand((unsigned) time(NULL));
	for (int i = 0; i < 20; i++) {
		int random = 30 + (rand() % 50);
		tab.push_back(random);
	}
	try {
		res = easyfind(tab, nb);
		std::cout << res << ": found in container" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << nb << e.what() << std::endl;
	}

	return (0);
}
