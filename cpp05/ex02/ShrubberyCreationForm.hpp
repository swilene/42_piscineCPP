/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:42:58 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/10 12:27:52 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

# include <iostream>
# include <fstream>
# include <string>
# include <string.h>

class	ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm(void); //default constructor
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const & src); //copy constructor
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs); //copy assignment operator
		virtual ~ShrubberyCreationForm(void); //destructor

		std::string		getTarget(void) const;
		virtual void	action(void) const;

	private:
		std::string	_target;
};

#endif
