/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:42:58 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/28 15:54:57 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class	ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm(void); //default constructor
		ShrubberyCreationForm(ShrubberyCreationForm const & src); //copy constructor
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs); //copy assignment operator
		~ShrubberyCreationForm(void); //destructor

	protected:
	private:
};

#endif
