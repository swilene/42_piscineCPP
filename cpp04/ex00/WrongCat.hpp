/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:10:51 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/09 11:37:32 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <string>

# include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	public:
		WrongCat(void); //default constructor
		WrongCat(std::string type);
		WrongCat(WrongCat const & src); //copy constructor
		WrongCat & operator=(WrongCat const & rhs); //copy assignment operator
		~WrongCat(void); //destructor
		//virtual ~WrongCat(void); //destructor

		void			makeSound(void) const;
		//virtual void	makeSound(void) const;
};

#endif
