/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 14:37:21 by saguesse          #+#    #+#             */
/*   Updated: 2023/06/19 18:24:56 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <cstdlib>

#include "PmergeMe.hpp"

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

	PmergeMe	pmergeme;

	try {
		pmergeme.createVector(argc, argv);
		pmergeme.makePairs();
		pmergeme.sortEachPairs();
		pmergeme.insertSort(0, pmergeme.getPvSize() - 1);
		pmergeme.sortVector();
		if (pmergeme.getVSize() % 2)
			pmergeme.insertLast(0, pmergeme.getVSize() - 1);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	//pmergeme.sortList();

	return (0);
}
