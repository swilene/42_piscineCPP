/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:56:47 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/27 15:58:19 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	std::cout << "Creating a Bureaucrat instance with a grade of 160:" << std::endl;
	try
	{
		Bureaucrat	jim("Jim", 160);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::cout << "Creating a Bureaucrat instance with a grade of 0:" << std::endl;
	try
	{
		Bureaucrat	joe("Joe", 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::cout << "Creating a Bureaucrat instance with a grade of 149:" << std::endl;
	Bureaucrat	jack("Jack", 149);
	std::cout << jack;
	std::cout << "Decreasing Jack's grade:" << std::endl;
	jack.decreaseGrade();
	std::cout << jack;
	std::cout << "Decreasing Jack's grade:" << std::endl;
	try
	{
		jack.decreaseGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::cout << "Creating a Bureaucrat instance with a grade of 2:" << std::endl;
	Bureaucrat	james("James", 2);
	std::cout << james;
	std::cout << "Increasing James' grade:" << std::endl;
	james.increaseGrade();
	std::cout << james;
	std::cout << "Increasing James' grade:" << std::endl;
	try
	{
		james.increaseGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	return (0);
}
