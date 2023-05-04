/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:56:47 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/04 20:29:21 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	//AForm*	s = new ShrubberyCreationForm("garden");
	//AForm*	r = new RobotomyRequestForm("robot");
	AForm*	p = new PresidentialPardonForm("Jim");
	Bureaucrat		james("James", 6);

	std::cout << std::endl;

	try
	{
		p->execute(james);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	//s->beSigned(james);
	//r->beSigned(james);
	p->beSigned(james);
	try
	{
		p->execute(james);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	//delete s;
	//delete r;
	delete p;
	return (0);
}
