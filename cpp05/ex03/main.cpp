/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:56:47 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/11 18:10:23 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	Bureaucrat		james("James", 132);
	Bureaucrat		jim("Jim", 47);
	Bureaucrat		jack("Jack", 26);
	Bureaucrat		joe("Joe", 5);
	Intern someRandomIntern;
	std::cout << std::endl;
	AForm*	s = someRandomIntern.makeForm("shrubbery creation", "garden");
	std::cout << std::endl;
	AForm*	r = someRandomIntern.makeForm("robotomy request", "Your neighbour");
	std::cout << std::endl;
	AForm*	p = someRandomIntern.makeForm("presidential pardon", "John");
	std::cout << std::endl;
	AForm*	wrongForm;
	wrongForm = someRandomIntern.makeForm("unknowned form", "Nemo");
	std::cout << std::endl;

	// *** James -> Shrubbery Creation Form ***
	std::cout << james;
	try
	{
		std::cout << "James wants to execute Shrubbery Creation Form:" << std::endl;
		s->execute(james);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "James wants to sign Shrubbery Creation Form:" << std::endl;
		s->beSigned(james);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "James wants to execute Shrubbery Creation Form:" << std::endl;
		s->execute(james);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	// *** Jim -> Robotomy Request Form ***
	std::cout << jim;
	try
	{
		std::cout << "Jim wants to sign Shrubbery Creation Form:" << std::endl;
		r->beSigned(jim);
		std::cout << "Jim signed Shrubbery Creation Form!" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "Jim wants to execute Robotomy Request Form:" << std::endl;
		r->execute(jim);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	// *** Jack -> Presidential Pardon Form ***
	std::cout << jack;
	try
	{
		std::cout << "Jack wants to execute Presidential Pardon Forn:" << std::endl;
		p->execute(jack);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "Jack wants to sign Presidential Pardon Form:" << std::endl;
		p->beSigned(jack);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	// *** Joe -> Presidential Pardon Form ***
	std::cout << joe;
	try
	{
		std::cout << "Joe wants to sign Presidential Pardon Form:" << std::endl;
		p->beSigned(joe);
		std::cout << "Joe signed Presidential Pardon Form!" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "Joe wants to execute Presidential Pardon Forn:" << std::endl;
		p->execute(joe);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	delete s;
	delete r;
	delete p;
	return (0);
}
