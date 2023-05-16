/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 09:42:33 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/16 14:44:01 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include <limits>

class	ScalarConverter
{
	public:
		ScalarConverter(void); //default constructor
		ScalarConverter(ScalarConverter const & src); //copy constructor
		ScalarConverter & operator=(ScalarConverter const & rhs); //copy assignment operator
		~ScalarConverter(void); //destructor

		static void	convert(std::string s);
		static void	isChar(std::string s);
		static void	isInt(std::string s);
		static void	isFloat(std::string s);
		static void	isDouble(std::string s);
		static void isError(std::string s);

	private:
		std::string	_type;
};

#endif
