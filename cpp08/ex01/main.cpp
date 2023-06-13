/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:18:20 by saguesse          #+#    #+#             */
/*   Updated: 2023/06/09 11:51:35 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include <limits>
#include <vector>
#include <iostream>
#include <cstdlib>

int	main()
{
	srand((unsigned) time(NULL));

	unsigned int N = 100;	
	Span	sp(N);
	Span	otherSp(N);

	otherSp.setTab();
	
	std::cout << std::endl;

	for (unsigned int i = 0; i < N; i++)
		sp.addNumber(-1000 + (rand() % 1000));

	try {
		sp.addNumber(-1000 + (rand() % 1000));
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		unsigned int i = sp.shortestSpan();
		std::cout << "shortest span: " << i << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		unsigned int i = sp.longestSpan();
		std::cout << "longest span: " << i << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	return (0);
}
