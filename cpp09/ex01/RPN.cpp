/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:33:28 by saguesse          #+#    #+#             */
/*   Updated: 2023/06/16 18:27:48 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

#include <iostream>
#include <string>
#include <stack>
#include <cctype>
#include <cstdlib>

RPN::RPN(void)
{
	std::cout << "RPN Default constructor called" << std::endl;

	return ;
}

RPN::RPN(std::string str) : _str(str)
{
	std::cout << "RPN Parametric constructor called" << std::endl;

	return ;
}

RPN::RPN(RPN const & src)
{
	std::cout << "RPN Copy constructor called" << std::endl;
	*this = src;

	return ;
}

RPN & RPN::operator=(RPN const & rhs)
{
	std::cout << "RPN Copy assignment operator called" << std::endl;

	if (this != &rhs)
		this->_str = rhs._str;

	return (*this);
}

RPN::~RPN(void)
{
	std::cout << "RPN Destructor called" << std::endl;

	return ;
}

void	RPN::calculate()
{
	std::stack<double>	myStack;
	double	first, second;
	std::string nb;
	size_t i = 0;
	
	for (; i < this->_str.size(); i++) {
		if (isdigit(this->_str[i])) {
			nb = this->_str.substr(i, 1);
			myStack.push(atoi(nb.c_str()));
		}
		else if (this->_str[i] != ' ')
			break;
	}
	if (myStack.size() < 2)
		throw ImpossibleException();
	for (; i < this->_str.size(); i++) {
		if (isdigit(this->_str[i])) {
			nb = this->_str.substr(i, 1);
			myStack.push(atoi(nb.c_str()));
		}
		else if (this->_str[i] == '/' || this->_str[i] == '*' || 
				this->_str[i] == '-' || this->_str[i] == '+')
		{
			if (myStack.size() < 2 && !isdigit(this->_str[i + 2]))
				throw ImpossibleException();
			else {
				second = myStack.top();
				myStack.pop();
				first = myStack.top();
				myStack.pop();
			}
			if (this->_str[i] == '/') {
				if (second == 0)
					throw DivisionByZeroException();
				myStack.push(first / second);
			}
			else if (this->_str[i] == '*')
				myStack.push(first * second);
			else if (this->_str[i] == '+')
				myStack.push(first + second);
			else if (this->_str[i] == '-')
				myStack.push(first - second);
		}
	}
	if (myStack.size() > 1)
		throw ImpossibleException();
	std::cout << myStack.top() << std::endl;
}

const char*	RPN::DivisionByZeroException::what() const throw()
{
	return ("Impossible: division by zero");
}

const char*	RPN::ImpossibleException::what() const throw()
{
	return ("Impossible");
}
