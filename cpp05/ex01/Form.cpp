/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:05:37 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/27 17:24:09 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*Form::Form(void)
{
	std::cout << "Form Default constructor called" << std::endl;

	return ;
}*/

Form::Form(std::string name, int gradeToSign, int gradeToExecute)
	: _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	std::cout << "Form " << name << " Parametric constructor called" << std::endl;

	if (gradeToSign < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150)
		throw Form::GradeTooLowException();
	if (gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeToExecute > 150)
		throw Form::GradeTooLowException();

	this->_isSigned = false;

	return ;
}

Form::Form(Form const & src) : _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute)
{
	std::cout << "Form Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Form & Form::operator=(Form const & rhs)
{
	std::cout << "Form Copy assignment operator called" << std::endl;

	if (this != &rhs)
		this->_isSigned = rhs._isSigned;

	return (*this);
}

Form::~Form(void)
{
	std::cout << "Form Destructor called" << std::endl;

	return ;
}

std::string	Form::getName(void) const
{
	return (this->_name);
}

bool	Form::getIsSigned(void) const
{
	return (this->_isSigned);
}

int	Form::getGradeToSign(void) const
{
	return (this->_gradeToSign);
}

int	Form::getGradeToExecute(void) const
{
	return (this->_gradeToExecute);
}

void	Form::beSigned(Bureaucrat b)
{
	if (b.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException();
	this->_isSigned = true;
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return ("The grade is too high (< 1)");
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return ("The grade is too low (> 150)");
}

std::ostream & operator<<(std::ostream & o, Form const & rhs)
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
