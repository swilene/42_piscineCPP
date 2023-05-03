/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:56:47 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/03 18:01:56 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	const AForm*	s = new ShrubberyCreationForm("garden");
	const AForm*	r = new RobotomyRequestForm("robot");
	const AForm*	p = new PresidentialPardonForm("Jim");
	Bureaucrat		james("James", 1);

	std::cout << std::endl;

	try
	{
		p->execute(james);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	s->beSigned(james);
	r->beSigned(james);
	p->beSigned(james);
	try
	{
		p->execute(james);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	delete s;
	delete r;
	delete p;
	return (0);
}
