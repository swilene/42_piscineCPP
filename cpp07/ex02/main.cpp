/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:34:26 by saguesse          #+#    #+#             */
/*   Updated: 2023/06/15 18:35:12 by saguesse         ###   ########.fr       */
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
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
		std::cout << "Values of 'tmp':" << std::endl;
		for (int i = 0; i < MAX_VAL; i++)
			std::cout << "tmp[" << i << "] = " <<numbers[i] << std::endl;
		std::cout << "Changing the values of 'test'" << std::endl;
		std::cout << "Values of 'test':" << std::endl;
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = 1 + (rand() % 100);
        	numbers[i] = value;
			std::cout << "test[" << i << "] = " <<numbers[i] << std::endl;
		}
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
		std::cout << numbers[i] << std::endl;
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
    		delete [] mirror;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = 1 + (rand() % 100);
		std::cout << numbers[i] << std::endl;
    }//
	std::cout << "size: " << numbers.size() << std::endl;
    delete [] mirror;
    return 0;
}
