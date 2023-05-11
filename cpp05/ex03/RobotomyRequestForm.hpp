/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:53:51 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/11 12:08:07 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

# include <iostream>
# include <string>
# include <stdlib.h>

class	RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(void); //default constructor
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const & src); //copy constructor
		RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs); //copy assignment operator
		virtual ~RobotomyRequestForm(void); //destructor

		std::string		getTarget(void) const;
		virtual void	action(void) const;

	private:
		std::string	_target;
};

#endif
