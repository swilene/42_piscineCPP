/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 18:41:58 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/09 11:40:39 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : public AAnimal
{
	public:
		Dog(void); //default constructor
		Dog(std::string type);
		Dog(Dog const & src); //copy constructor
		Dog & operator=(Dog const & rhs); //copy assignment operator
		virtual ~Dog(void); //destructor

		virtual void	makeSound(void) const;
		Brain&			getBrain(void);

	private:
		Brain*	_brain;
};

#endif
