/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:21:06 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/17 14:14:20 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.h"

int	main(void)
{
	Data	ptr;

	std::cout << "ptr address at the beginning: " << &ptr << std::endl;

	Serializer::deserialize(Serializer::serialize(&ptr));
	ptr.i = 42;

	std::cout << "ptr address at the end: " << &ptr << std::endl;
	std::cout << "Value of i: " << ptr.i << std::endl;


	return (0);
}
