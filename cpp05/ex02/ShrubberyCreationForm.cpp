/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:43:14 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/08 11:42:44 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm()
{
	std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;

	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: AForm("Shrubbery Form", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm Parametric constructor called" << std::endl;

	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
	: AForm(src)
{
	std::cout << "ShrubberyCreationForm Copy constructor called" << std::endl;
	*this = src;

	return ;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	std::cout << "ShrubberyCreationForm Copy assignment operator called" << std::endl;

	if (this != &rhs)
		this->_target = rhs._target;

	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm Destructor called" << std::endl;

	return ;
}

std::string ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}
