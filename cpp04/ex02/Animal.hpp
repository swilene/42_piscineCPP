/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 17:53:50 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/09 11:40:18 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class	AAnimal
{
	public:
		AAnimal(void); //default constructor
		AAnimal(std::string type);
		AAnimal(AAnimal const & src); //copy constructor
		AAnimal & operator=(AAnimal const & rhs); //copy assignment operator
		virtual ~AAnimal(void); //destructor

		virtual void	makeSound(void) const = 0;
		std::string		getType(void) const;

	protected:
		std::string	_type;
};

#endif
