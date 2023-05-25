/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 09:42:46 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/24 16:12:46 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

#include <iomanip>

ScalarConverter::ScalarConverter(void)
{
	std::cout << "ScalarConverter Default constructor called" << std::endl;

	return ;
}

ScalarConverter::ScalarConverter(ScalarConverter const & src)
{
	std::cout << "ScalarConverter Copy constructor called" << std::endl;
	*this = src;

	return ;
}

ScalarConverter & ScalarConverter::operator=(ScalarConverter const & rhs)
{
	std::cout << "ScalarConverter Copy assignment operator called" << std::endl;

	if (this != &rhs)
	{

	}

	return (*this);
}

ScalarConverter::~ScalarConverter(void)
{
	std::cout << "ScalarConverter Destructor called" << std::endl;

	return ;
}

void	ScalarConverter::convert(std::string s)
{
	size_t	i = 0;

	if (s == "nan" || s == "-inf" || s == "+inf" || s == "inf")
		isDouble(s);
	else if (s == "nanf" || s == "-inff" || s == "+inff" || s == "inff")
		isFloat(s);
	else if (s.size() == 1 && !isdigit(s[0]))
		isChar(s);
	else
	{
		if (s[0] == '-')
			i++;
		do
			i++;
		while (isdigit(s[i]));
		if (i == s.size())
			isInt(s);
		else if (s[i] == '.')
		{
			do
				i++;
			while (isdigit(s[i]));
			if (i == s.size())
				isDouble(s);
			else if (s[i] == 'f' && !s[i + 1])
				isFloat(s);
			else
				isError(s);
		}
		else
			isError(s);;
	}
}

void	ScalarConverter::isChar(std::string s)
{
	std::cout << s << " is a char" << std::endl;
	char c = s[0];
	std::cout << "char: ";
	if (c < 32 || c > 126)
		std::cout << "non displayable" << std::endl;
	else
		std::cout << c << std::endl;
	int i = static_cast<int>(c);
	std::cout << "int: " << i << std::endl;
	std::cout.precision(1);
	std::cout << setiosflags(std::ios::fixed);
	std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void	ScalarConverter::isInt(std::string s)
{
	int i;

	std::cout << "int: ";
	if (s.size() > 11 || strtol(s.c_str(), NULL, 0) > std::numeric_limits<int>::max()
			|| strtol(s.c_str(), NULL, 0) < std::numeric_limits<int>::min())
	{
		std::cout << "impossible" << std::endl;
		std::cout << "char: impossible due to an int overflow" << std::endl;
		std::cout << "float: impossible due to an int overflow" << std::endl;
		std::cout << "double: impossible due to an int overflow" << std::endl;
		return ;
	}
	else
	{
		i = atoi(s.c_str());
		std::cout << i << std::endl;
	}
	std::cout << "char: ";
	if (i < 0 || i > 127)
		std::cout << "impossible" << std::endl;
	else if (i < 32 || i > 126)
		std::cout << "non displayable" << std::endl;
	else 
		std::cout << static_cast<char>(i) << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout.precision(1);
	std::cout << setiosflags(std::ios::fixed);
	std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << std::endl;
}

void	ScalarConverter::isFloat(std::string s)
{
	float f = atof(s.c_str());
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "char: ";
	if (f < 0 || f > 127)
		std::cout << "impossible" << std::endl;
	else if (f < 32 || f > 126)
		std::cout << "non displayable" << std::endl;
	else 
		std::cout << static_cast<char>(f) << std::endl;
	std::cout << "int: ";
	if (f > std::numeric_limits<int>::max() || f < std::numeric_limits<int>::min())
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(f) << std::endl;
	std::cout << "double: " << static_cast<double>(f) << std::endl;
}

void	ScalarConverter::isDouble(std::string s)
{
	double d = atof(s.c_str());
	std::cout << "double: " << d << std::endl;
	std::cout << "char: ";
	if (d < 0 || d > 127)
		std::cout << "impossible" << std::endl;
	else if (d < 32 || d > 126)
		std::cout << "non displayable" << std::endl;
	else 
		std::cout << static_cast<char>(d) << std::endl;
	std::cout << "int: ";
	if (d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min())
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(d) << std::endl;
	//std::cout.precision(1);
	//std::cout << setiosflags(std::ios::fixed);
	std::cout.unsetf(std::ios::floatfield);
	std::cout.precision(5);
	std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
}

void	ScalarConverter::isError(std::string s)
{
	std::cout << s << " is an error." <<std::endl;
	std::cout << "Please enter a char, an int, a double or a float"	<< std::endl;
}
