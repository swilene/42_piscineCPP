/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:53:51 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/03 17:34:08 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class	RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(void); //default constructor
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const & src); //copy constructor
		RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs); //copy assignment operator
		virtual ~RobotomyRequestForm(void); //destructor

		std::string		getTarget(void) const;

		virtual void    beSigned(Bureaucrat const &bureaucrat);
		virtual void	execute(Bureaucrat const & executor) const;

	private:
		std::string	_target;
};

#endif
