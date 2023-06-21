/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:18:20 by saguesse          #+#    #+#             */
/*   Updated: 2023/06/21 13:53:28 by saguesse         ###   ########.fr       */
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

	unsigned int N = 10;	
	Span	sp(N);
	
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
		std::cout << "sp shortest span: " << i << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		unsigned int i = sp.longestSpan();
		std::cout << "sp longest span: " << i << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	
	Span	otherSp(sp);

	std::cout << std::endl;
	
	std::cout << "otherSp shortest span: " << otherSp.shortestSpan() << std::endl;
	std::cout << "otherSp longest span: " << otherSp.longestSpan() << std::endl;

	std::cout << std::endl;

	return (0);
}
