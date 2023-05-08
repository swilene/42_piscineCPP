/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:54:32 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/08 11:43:10 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm Default constructor called" << std::endl;

	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: AForm("Presidential Form", 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm Parametric constructor called" << std::endl;

	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)
	: AForm(src)
{
	std::cout << "PresidentialPardonForm Copy constructor called" << std::endl;
	*this = src;

	return ;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	std::cout << "PresidentialPardonForm Copy assignment operator called" << std::endl;

	if (this != &rhs)
		this->_target = rhs._target;

	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm Destructor called" << std::endl;

	return ;
}

std::string	PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

void	PresidentialPardonForm::action(void) const
{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox."
		<< std::endl;

	return ;
}
