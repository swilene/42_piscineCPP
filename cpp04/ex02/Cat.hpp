/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 18:44:59 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/24 17:45:22 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public AAnimal
{
	public:
		Cat(void); //default constructor
		Cat(std::string type);
		Cat(Cat const & src); //copy constructor
		Cat & operator=(Cat const & rhs); //copy assignment operator
		virtual ~Cat(void); //destructor

		virtual void	makeSound(void) const;
		Brain&			getBrain(void);

	private:
		Brain*	_brain;
};

#endif
