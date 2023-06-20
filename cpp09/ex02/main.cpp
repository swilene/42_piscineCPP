/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 14:37:21 by saguesse          #+#    #+#             */
/*   Updated: 2023/06/20 18:00:29 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <cstdlib>

#include "PmergeMe.hpp"
#include "Vectors.hpp"

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

	PmergeMe* v = new Vectors();

	try {
		v->createContainer(argc, argv);
		v->makePairs();
		v->sortEachPairs();
		v->insertSort(0, v->getPairsVSize() - 1);
		v->sortVector();
		if (v->getVSize() % 2)
			v->insertLast(0, v->getVSize() - 1);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	//pmergeme.sortList();

	return (0);
}
