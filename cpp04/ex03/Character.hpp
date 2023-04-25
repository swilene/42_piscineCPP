/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:21:45 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/25 14:22:38 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

class	ICharacter
{
	public:
		ICharacter(void); //default constructor
		ICharacter(Character const & src); //copy constructor
		ICharacter & operator=(Character const & rhs); //copy assignment operator
		~ICharacter(void); //destructor

	protected:
	private:
};

#endif
