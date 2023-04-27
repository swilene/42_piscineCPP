/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 18:00:27 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/25 14:37:20 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_HPP
# define MATERIA_HPP

class	AMateria
{
	public:
		AMateria(void); //default constructor
		AMateria(std::string const & type);
		AMateria(AMateria const & src); //copy constructor
		AMateria & operator=(AMateria const & rhs); //copy assignment operator
		~AMateria(void); //destructor

		std::string const & getType(void) const; //Returns the materia type
		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter& target);

	protected:
		std::string	const _type;
};

#endif