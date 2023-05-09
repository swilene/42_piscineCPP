/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:21:45 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/09 12:24:09 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

class	ICharacter
{
	public:
		ICharacter(void); //default constructor
		ICharacter(std::string name);
		ICharacter(Character const & src); //copy constructor
		ICharacter & operator=(Character const & rhs); //copy assignment operator
		virtual ~ICharacter(void); //destructor

		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;

	protected:
		std::string	_name;
};

#endif
