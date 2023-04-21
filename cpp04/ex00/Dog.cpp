/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 18:42:21 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/21 19:05:13 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Dog Default constructor called" << std::endl;

	return ;
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "Dog Parametric constructor called" << std::endl;

	return ;
}

Dog::Dog(Dog const & src) : Animal(src)
{
	std::cout << "Dog Copy constructor called" << std::endl;

	return ;
}

Dog & Dog::operator=(Dog const & rhs)
{
	std::cout << "Dog Copy assignment operator called" << std::endl;

	Animal::operator=(rhs);

	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor called" << std::endl;

	return ;
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof" << std::endl;
}
