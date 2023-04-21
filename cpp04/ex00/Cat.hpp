/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 18:44:59 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/21 19:12:34 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#ifndef CAT_HPP
# define CAT_HPP

class	Cat : public Animal
{
	public:
		Cat(void); //default constructor
		Cat(std::string type);
		Cat(Cat const & src); //copy constructor
		Cat & operator=(Cat const & rhs); //copy assignment operator
		~Cat(void); //destructor

		virtual void	makeSound(void) const;
};

#endif
