/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:56:47 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/28 11:06:44 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	std::cout << "Creating a Form instance with a gradeToSign of 152 and a gradeToExecute of 14:" << std::endl;
	try
	{
		Form	form1("Form1", 152, 14);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::cout << "Creating a Form instance with a gradeToSign of 16 and a gradeToExecute of 0:" << std::endl;
	try
	{
		Form	form2("Form2", 16, 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::cout << "Creating a Form instance with a gradeToSign of 23 and a gradeToExecute of 137:" << std::endl;
	Form	form3("Form3", 23, 137);
	std::cout << form3 << std::endl;
	std::cout << "Creating a Form instance with a gradeToSign of 34 and a gradeToExecute of 56:" << std::endl;
	Form	form4("Form4", 38, 56);
	std::cout << form3 << std::endl;
	std::cout << "Creating a Bureaucrat instance with a grade of 14:" << std::endl;
	Bureaucrat	jack("Jack", 14);
	std::cout << jack;
	std::cout << "Creating a Bureaucrat instance with a grade of 38:" << std::endl;
	Bureaucrat	joe("Joe", 38);
	std::cout << joe;

	std::cout << std::endl;

	jack.signForm(form3);
	joe.signForm(form4);

	std::cout << std::endl;

	std::cout << "Jack try to sign Form3:" << std::endl;
	try
	{
		form3.beSigned(jack);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	jack.signForm(form3);

	std::cout << std::endl;

	std::cout << "Decreasing Joe's grade:" << std::endl;
	joe.decreaseGrade();
	std::cout << joe;
	std::cout << "Joe try to sign Form4:" << std::endl;
	try
	{
		form4.beSigned(joe);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	joe.signForm(form4);

	std::cout << std::endl;

	return (0);
}
