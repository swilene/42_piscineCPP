/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:13:23 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/09 12:12:23 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "Materia.hpp"

# include <string>
# include <iostream>

class	Ice : public AMateria
{
	public:
		Ice(void); //default constructor
		Ice(Ice const & src); //copy constructor
		Ice & operator=(Ice const & rhs); //copy assignment operator
		virtual ~Ice(void); //destructor

		virtual Ice* clone(void) const;
		virtual void use(ICharacter& target);

	protected:
	private:
};

#endif
