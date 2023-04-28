/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:05:37 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/28 15:54:15 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

AForm::AForm(void) : _name("Form"), _gradeToSign(1), _gradeToExecute(1)
{
	std::cout << "AForm Default constructor called" << std::endl;
	
	this->_isSigned = false;

	return ;
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute)
	: _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	std::cout << "AForm " << name << " Parametric constructor called" << std::endl;

	if (gradeToSign < 1)
		throw AForm::GradeTooHighException();
	else if (gradeToSign > 150)
		throw AForm::GradeTooLowException();
	if (gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	else if (gradeToExecute > 150)
		throw AForm::GradeTooLowException();

	this->_isSigned = false;

	return ;
}

AForm::AForm(AForm const & src) : _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute)
{
	std::cout << "AForm Copy constructor called" << std::endl;
	*this = src;

	return ;
}

AForm & AForm::operator=(AForm const & rhs)
{
	std::cout << "AForm Copy assignment operator called" << std::endl;

	if (this != &rhs)
		this->_isSigned = rhs._isSigned;

	return (*this);
}

AForm::~AForm(void)
{
	std::cout << "AForm " << this->_name << " Destructor called" << std::endl;

	return ;
}

std::string	AForm::getName(void) const
{
	return (this->_name);
}

bool	AForm::getIsSigned(void) const
{
	return (this->_isSigned);
}

int	AForm::getGradeToSign(void) const
{
	return (this->_gradeToSign);
}

int	AForm::getGradeToExecute(void) const
{
	return (this->_gradeToExecute);
}

const char*	AForm::GradeTooHighException::what() const throw()
{
	return ("The grade is too high");
}

const char*	AForm::GradeTooLowException::what() const throw()
{
	return ("The grade is too low");
}

std::ostream & operator<<(std::ostream & o, AForm const & rhs)
{
	if (rhs.getIsSigned() == false)
		o << "The form " << rhs.getName() << " is not signed, and requires a grade of "
			<< rhs.getGradeToSign() << " to be signed and a grade of "
			<< rhs.getGradeToExecute() << " to be executed.";
	else
		o << "The form " << rhs.getName() << " is signed, and requires a grade of "
			<< rhs.getGradeToSign() << " to be signed and a grade of "
			<< rhs.getGradeToExecute() << " to be executed.";

	return (o);
}
