/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:53:59 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/04 20:46:02 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm()
{
	std::cout << "RobotomyRequestForm Default constructor called" << std::endl;

	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: AForm("Robotomy Form", 72, 45)
{
	std::cout << "RobotomyRequestForm Parametric constructor called" << std::endl;
	this->_target = target;

	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src)
	: AForm(src)
{
	std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;
	*this = src;

	return ;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	std::cout << "RobotomyRequestForm Copy assignment operator called" << std::endl;

	if (this != &rhs)
		this->_target = rhs._target;

	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm Destructor called" << std::endl;

	return ;
}

std::string	RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

void	RobotomyRequestForm::action(void) const
{
	std::cout << "* drilling noises  *" << std::endl;
	//random 50%
}
