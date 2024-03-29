/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:18:32 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/19 18:59:27 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixed_point(0)
{
	std::cout << "Default constructor called" << std::endl;

	return ;
}

Fixed::Fixed(int const i)
{
	std::cout << "Int constructor called" << std::endl;

	this->_fixed_point = i << this->_fract;

	return ;
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;

	this->_fixed_point = roundf(f *(1 << this->_fract));

	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;

	return ;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &rhs)
		this->_fixed_point = rhs.getRawBits();

	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (this->_fixed_point);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixed_point = raw;

	return ;
}

float   Fixed::toFloat(void) const
{
	return ((float)(this->_fixed_point) / (float)(1 << this->_fract));
}

int   Fixed::toInt(void) const
{
	return (this->_fixed_point >> this->_fract);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();

	return (o);
}
