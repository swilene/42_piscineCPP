/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:21:06 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/17 11:03:24 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.h"

int	main(void)
{
	Data	ptr;

	std::cout << "ptr adress at the beginning: " << &ptr << std::endl;

	Serializer::deserialize(Serializer::serialize(&ptr));
	ptr.i = 42;

	std::cout << "ptr adress at the end: " << &ptr << std::endl;
	std::cout << "Value of i: " << ptr.i << std::endl;


	return (0);
}