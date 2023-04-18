/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:18:32 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/18 20:00:30 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;

	return ;
}

Fixed::Fixed(int const i) : _integer(i)
{
	std::cout << "Int constructor called" << std::endl;

	return ;
}

Fixed::Fixed(float const f) : _decimal(f)
{
	std::cout << "Float constructor called" << std::endl;

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
		this->_integer = rhs.getRawBits();

	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;

	return ;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;

	return (this->_integer);
}

void	Fixed::setRawBits(int const raw)
{
	this->_integer = raw;

	return ;
}

float   Fixed::toFloat(void) const
{
	this->_integer = this->_decimal;
}

int   Fixed::toInt(void) const
{
	this->_decimal = this->_integer;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();

	return (o);
}
