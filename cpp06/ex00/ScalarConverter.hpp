/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:50:55 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/14 17:34:46 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <cstring>
# include <limits>
# include <cstdlib>

class	ScalarConverter
{
	public:
		ScalarConverter(void); //default constructor
		ScalarConverter(ScalarConverter const & src); //copy constructor
		ScalarConverter & operator=(ScalarConverter const & rhs); //copy assignment operator
		~ScalarConverter(void); //destructor

		static void	convert(char* s);
};

#endif
