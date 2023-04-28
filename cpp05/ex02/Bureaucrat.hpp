/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 14:28:13 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/28 15:46:11 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "Form.hpp"

# include <iostream>
# include <string>

class	AForm;

class	Bureaucrat
{
	public:
		Bureaucrat(void); //default constructor
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & src); //copy constructor
		Bureaucrat & operator=(Bureaucrat const & rhs); //copy assignment operator
		~Bureaucrat(void); //destructor

		std::string getName(void) const;
		int			getGrade(void) const;
		void		increaseGrade(void);
		void		decreaseGrade(void);

		void	signForm(AForm& f);

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

	private:
		std::string const	_name;
		int					_grade;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif
