/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:50:12 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/16 11:34:29 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Expected: ./convert [char, int, double or float]" << std::endl;
		return (1);
	}
	ScalarConverter::convert(argv[1]);
	return (0);
}
