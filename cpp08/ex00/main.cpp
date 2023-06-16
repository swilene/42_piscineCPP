/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 14:55:37 by saguesse          #+#    #+#             */
/*   Updated: 2023/06/16 11:26:30 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <vector>
#include <list>
#include <deque>
#include <iostream>

int	main()
{
	std::vector<int> v;
	std::list<int> l;
	std::deque<int> d;
	int res, nb = 42;

	srand((unsigned) time(NULL));
	for (int i = 0; i < 20; i++) {
		int random = 30 + (rand() % 50);
		v.push_back(random);
		l.push_back(random);
		d.push_back(random);

	}
	try {
		res = easyfind(v, nb);
		std::cout << res << ": found in the vector" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << nb << e.what() << " vector" << std::endl;
	}

	try {
		res = easyfind(l, nb);
		std::cout << res << ": found in the list" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << nb << e.what() << " list" << std::endl;
	}

	try {
		res = easyfind(d, nb);
		std::cout << res << ": found in the deque" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << nb << e.what() << " deque" << std::endl;
	}

	return (0);
}
