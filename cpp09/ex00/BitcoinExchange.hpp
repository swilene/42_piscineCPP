/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:49:59 by saguesse          #+#    #+#             */
/*   Updated: 2023/06/13 14:47:24 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <map>
#include <string>
#include <cstring>
#include <exception>

class	WrongDateException : public std::exception
{
	public:
		const char* what() const throw() { return ("Error: bad input => "); }
};

class	NegativeNumberException : public std::exception
{
	public:
		const char* what() const throw() { return ("Error: not a positive number"); }
};

class	NumberTooBigException : public std::exception
{
	public:
		const char* what() const throw() { return ("Error: number too big"); }
};

class	InvalidInputException : public std::exception
{
	public:
		const char* what() const throw() { return ("Error: not a number"); }
};

class	BitcoinExchange
{
	public:
		BitcoinExchange(void); //default constructor
		BitcoinExchange(BitcoinExchange const & src); //copy constructor
		BitcoinExchange & operator=(BitcoinExchange const & rhs); //copy assignment operator
		~BitcoinExchange(void); //destructor
		
		void	CheckInputs(std::ifstream & inputFile);

	private:
		std::map <std::string, double> _dataBase;
		std::map <std::string, double> _inputs;
};

#endif
