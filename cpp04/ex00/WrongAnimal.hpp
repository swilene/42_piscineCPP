/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:10:06 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/24 11:08:36 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class	WrongAnimal
{
	public:
		WrongAnimal(void); //default constructor
		WrongAnimal(std::string type);
		WrongAnimal(WrongAnimal const & src); //copy constructor
		WrongAnimal & operator=(WrongAnimal const & rhs); //copy assignment operator
		~WrongAnimal(void); //destructor
		//virtual ~WrongAnimal(void); //destructor

		void			makeSound(void) const;
		//virtual void	makeSound(void) const;
		std::string		getType(void) const;

	protected:
				std::string	_type;
};

#endif
