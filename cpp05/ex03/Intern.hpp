/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 14:46:26 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/11 16:54:29 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class	Intern
{
	public:
		Intern(void); //default constructor
		Intern(Intern const & src); //copy constructor
		Intern & operator=(Intern const & rhs); //copy assignment operator
		~Intern(void); //destructor

		AForm*	newShrubberyCreationForm(std::string target);
		AForm*	newRobotomyRequestForm(std::string target);
		AForm*	newPresidentialPardonForm(std::string target);
		AForm*	makeForm(std::string name, std::string target);
};

#endif
