/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:47:23 by saguesse          #+#    #+#             */
/*   Updated: 2023/06/13 14:47:19 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 2) {
		std::cout << "Error: could not open file." << std::endl;
		return (1);
	}
	else {
		std::ifstream inputFile;
		inputFile.open(argv[1]);
		if (inputFile.fail()) {
			std::cout << "Error: could not open file." << std::endl;
			return (2);
		}
		BitcoinExchange	be;
		std::cout << std::endl;

		be.CheckInputs(inputFile);
		inputFile.close();
		
		std::cout << std::endl;
	}

	return (0);
}
