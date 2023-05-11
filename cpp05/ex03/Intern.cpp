/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 14:46:29 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/11 18:07:44 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Intern Default constructor called" << std::endl;

	return ;
}

Intern::Intern(Intern const & src)
{
	std::cout << "Intern Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Intern & Intern::operator=(Intern const & rhs)
{
	std::cout << "Intern Copy assignment operator called" << std::endl;

	(void)rhs;

	return (*this);
}

Intern::~Intern(void)
{
	std::cout << "Intern Destructor called" << std::endl;

	return ;
}

AForm*	Intern::newShrubberyCreationForm(std::string target)
{
	AForm*	s = new ShrubberyCreationForm(target);

	return (s);
}

AForm*	Intern::newRobotomyRequestForm(std::string target)
{
	AForm*	r = new RobotomyRequestForm(target);

	return (r);
}

AForm*	Intern::newPresidentialPardonForm(std::string target)
{
	AForm*	p = new PresidentialPardonForm(target);

	return (p);
}

AForm*	Intern::makeForm(std::string name, std::string target)
{
	std::string forms[3] = {"shrubbery creation",
		"robotomy request",
		"presidential pardon"};

	AForm*	(Intern::*f[3])(std::string) = {&Intern::newShrubberyCreationForm, 
		&Intern::newRobotomyRequestForm, 
		&Intern::newPresidentialPardonForm};

	for (int i = 0; i < 3; i++)
	{
		if (name == forms[i])
		{
			std::cout << "Intern creates " << name << std::endl;
			return ((this->*f[i])(target));
		}
	}
	std::cout << name << ": this form doesn't exist..." << std::endl;
	return (NULL);
}
