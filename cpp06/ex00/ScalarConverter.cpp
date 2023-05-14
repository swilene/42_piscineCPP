/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 14:34:37 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/14 17:33:45 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

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

std::string	defineType(std::string s)
{
	int i = 0;

	if (s == "-inff" || s == "+inff" || s == "inff" || s == "nanf")
	{
		std::cout << s << " is a float" << std::endl;
		return ("float");
	}
	else if (s == "-inf" || s == "+inf" || s == "inf" || s == "nan")
	{
		std::cout << s << " is a double" << std::endl;
		return ("double");
	}
	else if (s.size() == 1 && !isdigit(s[0]))
	{
		std::cout << s << " is a char" << std::endl;
		return ("char");
	}
	else
	{
		if (s[0] == '-')
			i++;
		do
				i++;
		while (isdigit(s[i]));

		if (i == (int)s.size())
		{
			std::cout << s << " is an int" << std::endl;
			return ("int");
		}
		else if (s[i] == '.')
		{
			do
				i++;
			while (isdigit(s[i]));
			if (i == (int)s.size())
			{
				std::cout << s << " is a double" << std::endl;
				return ("double");
			}
			else if (s[i] == 'f')
			{
				std::cout << s << " is a float" << std::endl;
				return ("float");
			}
			return ("error");
		}
		return ("error");
	}
}

void	ScalarConverter::convert(char* s)
{
	char	c = '\0';
	int		i;
	//double	d;
	//float	f;
	std::string	type = defineType(s);

	if (type == "error")
	{
		std::cout << "Please, enter a valide input: char, int, double or float"
			<< std::endl;
		return ;
	}
	else if (type == "char")
	{
		c = s[0];
		std::cout << "char: ";
		if (c < ' ' || c > '~')
			std::cout << "non displayable" << std::endl;
		else
			std::cout << c << std::endl;
	}
	else if (type == "int")
	{
		std::cout << "int: ";
		if (strlen(s) > 11 || strtol(s, NULL, 0) < std::numeric_limits<int>::min()
				|| strtol(s, NULL, 0) > std::numeric_limits<int>::max())
			std::cout << "impossible" << std::endl;
		else
		{
			i = atoi(s);
			std::cout << i << std::endl;
		}
	}
}
