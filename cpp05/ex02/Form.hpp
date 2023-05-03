/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:05:26 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/03 17:37:43 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

# include <iostream>
# include <string>

class	Bureaucrat;

class	AForm
{
	public:
		AForm(void);
		AForm(std::string name, int gradeToSign, int gradeToExecute);
		AForm(AForm const & src); //copy constructor
		AForm & operator=(AForm const & rhs); //copy assignment operator
		virtual ~AForm(void); //destructor

		std::string	getName(void) const;
		bool		getIsSigned(void) const;
		void		setIsSigned(void);
		int			getGradeToSign(void) const;
		int			getGradeToExecute(void) const;

		virtual void	beSigned(Bureaucrat const &bureaucrat) = 0;
		virtual void	execute(Bureaucrat const & executor) const = 0;

		class	GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class	GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class	FormNotSigned : public std::exception
		{
			public:
				const char* what() const throw();
		};

	private:
		std::string const	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExecute;
};

std::ostream & operator<<(std::ostream & o, AForm const & rhs);

#endif
