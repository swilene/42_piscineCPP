/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 18:41:58 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/24 15:48:48 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : public Animal
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
