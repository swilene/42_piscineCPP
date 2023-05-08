/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:13:23 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/08 17:03:40 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "Materia.hpp"

class	Ice : public AMateria
{
	public:
		Ice(void); //default constructor
		Ice(Ice const & src); //copy constructor
		Ice & operator=(Ice const & rhs); //copy assignment operator
		~Ice(void); //destructor

		virtual Ice* clone(void) const;

	protected:
	private:
};

#endif
