/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 18:00:27 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/09 11:55:09 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_HPP
# define MATERIA_HPP

# include <string>
# include <iostream>

class	AMateria
{
	public:
		AMateria(void); //default constructor
		AMateria(std::string const & type);
		AMateria(AMateria const & src); //copy constructor
		AMateria & operator=(AMateria const & rhs); //copy assignment operator
		virtual ~AMateria(void); //destructor

		std::string const & getType(void) const; //Returns the materia type
		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter& target);

	protected:
		std::string	const _type;
};

#endif
