/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:47:08 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/24 16:09:49 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Default constructor called" << std::endl;

	return ;
}

Brain::Brain(Brain const & src)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Brain & Brain::operator=(Brain const & rhs)
{
	std::cout << "Brain Copy assignment operator called" << std::endl;

	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}

	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor called" << std::endl;

	return ;
}

void	Brain::setIdeas(std::string idea, int i)
{
	this->_ideas[i] = idea;
}

std::string	Brain::getIdeas(int i)
{
	return (this->_ideas[i]);
}
