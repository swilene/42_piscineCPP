/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 14:28:31 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/28 15:46:03 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	std::cout << "Bureaucrat Default constructor called" << std::endl;

	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	std::cout << "Bureaucrat " << name << " Parametric constructor called" << std::endl;

	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;

	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	std::cout << "Bureaucrat Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	std::cout << "Bureaucrat Copy assignment operator called" << std::endl;

	if (this != &rhs)
		this->_grade = rhs._grade;

	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat " << this->_name << " Destructor called" << std::endl;

	return ;
}

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::increaseGrade(void)
{
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void	Bureaucrat::decreaseGrade(void)
{
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

void	Bureaucrat::signForm(AForm& f)
{
	if (f.getIsSigned() == false)
	{
		if (this->_grade > f.getGradeToSign())
			std::cout << this->_name << " couldn't sign " << f.getName()
				<< " because his grade isn't high enough." << std::endl;
		else
			std::cout << this->_name << " couldn't sign " << f.getName()
				<< " because he didn't have time yet." << std::endl;

	}
	else
		std::cout << this->_name << " signed " << f.getName() << "." << std::endl;
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("The grade is too high (< 1)");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("The grade is too low (> 150)");
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;

	return (o);
}
