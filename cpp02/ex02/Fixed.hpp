/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:15:04 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/25 17:59:15 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class	Fixed
{
	public:
		Fixed(void);
		Fixed(int const n);
		Fixed(float const n);
		Fixed(Fixed const & src);
		~Fixed(void);

		Fixed & operator=(Fixed const & rhs);
		int		operator<(Fixed const & rhs) const;
		int		operator>(Fixed const & rhs) const;
		int		operator>=(Fixed const & rhs) const;
		int		operator<=(Fixed const & rhs) const;
		int		operator==(Fixed const & rhs) const;
		int		operator!=(Fixed const & rhs) const;
		Fixed	operator+(Fixed const & rhs) const;
		Fixed	operator-(Fixed const & rhs) const;
		Fixed	operator*(Fixed const & rhs) const;
		Fixed	operator/(Fixed const & rhs) const;
		const	Fixed& operator++(void);
		const	Fixed operator++(int);
		const	Fixed& operator--(void);
		const	Fixed operator--(int);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		static const Fixed&	min(Fixed& a, Fixed& b);
		static const Fixed&	min(const Fixed& a, const Fixed& b);
		static const Fixed&	max(Fixed& a, Fixed& b);
		static const Fixed&	max(const Fixed& a, const Fixed& b);

	private:
		int					_fixed_point;
		static const int	_fract = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif
