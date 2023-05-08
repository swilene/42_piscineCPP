/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:18:32 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/08 15:01:43 by saguesse         ###   ########.fr       */
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

int	Fixed::operator<(Fixed const & rhs) const
{
	return (this->_fixed_point < rhs.getRawBits());
}

int	Fixed::operator>(Fixed const & rhs) const
{
	return (this->_fixed_point > rhs.getRawBits());
}

int	Fixed::operator<=(Fixed const & rhs) const
{
	return (this->_fixed_point <= rhs.getRawBits());
}

int	Fixed::operator>=(Fixed const & rhs) const
{
	return (this->_fixed_point >= rhs.getRawBits());
}

int	Fixed::operator==(Fixed const & rhs) const
{
	return (this->_fixed_point == rhs.getRawBits());
}

int	Fixed::operator!=(Fixed const & rhs) const
{
	return (this->_fixed_point != rhs.getRawBits());
}

Fixed	Fixed::operator+(Fixed const & rhs) const
{
	Fixed	res;

	res.setRawBits(this->_fixed_point + rhs.getRawBits());
	return (res);
}

Fixed	Fixed::operator-(Fixed const & rhs) const
{
	Fixed	res;

	res.setRawBits(this->_fixed_point - rhs.getRawBits());
	return (res);
}

Fixed	Fixed::operator*(Fixed const & rhs) const
{
	Fixed	res;

	res.setRawBits((this->_fixed_point * rhs.getRawBits()) / (1 << this->_fract));
	return (res);
}

Fixed	Fixed::operator/(Fixed const & rhs) const
{
	Fixed	res;

	res.setRawBits((this->_fixed_point * (1 << this->_fract)) / rhs.getRawBits());
	return (res);
}

const Fixed&	Fixed::operator++(void)
{
	this->_fixed_point++;
	return (*this);
}

const Fixed	Fixed::operator++(int)
{
	Fixed	tmp = *this;
	this->_fixed_point++;
	return (tmp);
}

const Fixed&	Fixed::operator--(void)
{
	this->_fixed_point--;
	return (*this);
}

const Fixed	Fixed::operator--(int)
{
	Fixed	tmp = *this;
	this->_fixed_point--;
	return (tmp);
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

const Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();

	return (o);
}
