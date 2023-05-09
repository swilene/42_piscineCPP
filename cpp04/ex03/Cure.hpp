/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:14:04 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/09 12:02:31 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "Materia.hpp"

# include <string>
# include <iostream>

class	Cure
{
	public:
		Cure(void); //default constructor
		Cure(Cure const & src); //copy constructor
		Cure & operator=(Cure const & rhs); //copy assignment operator
		virtual ~Cure(void); //destructor

		virtual Cure* clone(void) const;
		virtual void use(ICharacter& target);
		
	protected:
	private:
};

#endif
