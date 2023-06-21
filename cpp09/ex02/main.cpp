/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 14:37:21 by saguesse          #+#    #+#             */
/*   Updated: 2023/06/21 17:33:09 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <cstdlib>

#include "PmergeMe.hpp"
#include "Vectors.hpp"
#include "Deques.hpp"

int	main(int argc, char** argv)
{
	if (argc == 1) {
		std::cout << "./PmergeMe [positive integer sequence]" << std::endl;
		return (1);
	}
	for (int i = 1; i < argc; i++) {
		size_t j = 0;
		for (; j < strlen(argv[i]); j++) {
			if (!isdigit(argv[i][j]) && argv[i][j] != ' ') {
				std::cout << "Error: please enter positive integers only" << std::endl;
				return (1);
			}
		}
	}

	Vectors*	v = new Vectors();
	Deques*		d = new Deques();

	try {
		v->createContainer(argc, argv);
		v->makePairs();
		v->sortEachPairs();
		v->insertSort(0, v->getPairsVSize() - 1);
		v->sortContainer();
		if (v->getVSize() % 2)
			v->insertLast(0, v->getVSize() - 1);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		d->createContainer(argc, argv);
		d->makePairs();
		d->sortEachPairs();
		d->insertSort(0, d->getPairsDSize() - 1);
		d->sortContainer();
		if (d->getDSize() % 2)
			d->insertLast(0, d->getDSize() - 1);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	delete d;
	delete v;

	return (0);
}
