/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:54:24 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/04 20:26:22 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class	PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(void); //default constructor
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const & src); //copy constructor
		PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs); //copy assignment operator
		virtual ~PresidentialPardonForm(void); //destructor

		std::string	getTarget(void) const;

		virtual void	action(void) const;

	private:
		std::string	_target;
};

#endif
