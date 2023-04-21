/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 17:53:50 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/21 19:12:07 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class	Animal
{
	public:
		Animal(void); //default constructor
		Animal(std::string type);
		Animal(Animal const & src); //copy constructor
		Animal & operator=(Animal const & rhs); //copy assignment operator
		~Animal(void); //destructor

		virtual void	makeSound(void) const;
		std::string		getType(void) const;

	protected:
		std::string	_type;
};

#endif
