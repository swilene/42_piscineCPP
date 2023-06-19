/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:34:26 by saguesse          #+#    #+#             */
/*   Updated: 2023/06/19 14:24:34 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>

#include "Array.hpp"

#define MAX_VAL 7

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
	std::cout << std::endl;
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = 1 + (rand() % 100);
        numbers[i] = value;
        mirror[i] = value;
		std::cout << "[" << i << "] = " << numbers[i] << std::endl;
    }
	std::cout << std::endl;
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);

		std::cout << std::endl;

		std::cout << "Changing the values of 'test'" << std::endl;
		std::cout << "Values of 'test':" << std::endl;
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = 1 + (rand() % 100);
        	test[i] = value;
			std::cout << "test[" << i << "] = " << test[i] << std::endl;
		}
		std::cout << "Values of 'tmp':" << std::endl;
		for (int i = 0; i < MAX_VAL; i++)
			std::cout << "tmp[" << i << "] = " <<numbers[i] << std::endl;
    }

	std::cout << std::endl;

	std::cout << "Checking if 'numbers' and 'mirror' have the same values" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value at index " << i << "!!" << std::endl;
    		delete [] mirror;
            return 1;
        }
    }
	std::cout << "'numbers' and 'mirror' have the same values" << std::endl;
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Trying to access an index out of range: " << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL + 1] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Trying to access an index out of range: " << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = 1 + (rand() % 100);
		std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;
    }//
	std::cout << std::endl;
	std::cout << "size of 'numbers': " << numbers.size() << std::endl;
	std::cout << std::endl;

    delete [] mirror;

    return 0;
}
