/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:50:07 by saguesse          #+#    #+#             */
/*   Updated: 2023/06/13 14:46:59 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cctype>

BitcoinExchange::BitcoinExchange(void)
{
	std::cout << "BitcoinExchange Default constructor called" << std::endl;

	std::ifstream dataFile;
	dataFile.open("data.csv");
	if (dataFile.fail())
		std::cerr << "Error: could not open data.csv file" << std::endl;
	else {
		std::string	str, date;
		std::getline(dataFile, str);
		while (std::getline(dataFile, str)) {
			date = str.substr(0, 10);
			str.erase(0, 11);
			_dataBase.insert(std::pair<std::string, double>(date, atof(str.c_str())));
		}
	}
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & src)
{
	std::cout << "BitcoinExchange Copy constructor called" << std::endl;
	*this = src;

	return ;
}

BitcoinExchange & BitcoinExchange::operator=(BitcoinExchange const & rhs)
{
	std::cout << "BitcoinExchange Copy assignment operator called" << std::endl;

	if (this != &rhs)
		std::map<std::string, double> _dataBase = rhs._dataBase;

	return (*this);
}

BitcoinExchange::~BitcoinExchange(void)
{
	std::cout << "BitcoinExchange Destructor called" << std::endl;

	return ;
}

void	checkValue(std::string value)
{
	bool isDouble = false;
	size_t i = 0;
	if (value[0] == '-')
		i++;
	for (; i < value.size(); i++) {
		if (!isdigit(value[i])) {
			if (value[i] == '.') {
				if (!isdigit(value[i + 1]))
					throw InvalidInputException();
				isDouble = true;
			}
		}
	}
	if (value[0] == '-')
		throw NegativeNumberException();
	if (isDouble)
	{
		std::string integer= value.substr(0, value.find("."));
		if (integer.size() > 4)
			throw NumberTooBigException();
	}
	else if (value.size() > 4)
		throw NumberTooBigException();
	if (atof(value.c_str()) > 1000)
		throw NumberTooBigException();
}

void	checkDay(std::string day)
{
	if (day.size() != 2)
		throw WrongDateException();
	if (atoi(day.c_str()) < 1 || atoi(day.c_str()) > 31)
		throw WrongDateException();
}

void	checkMonth(std::string month)
{
	if (month.size() != 2)
		throw WrongDateException();
	if (atoi(month.c_str()) < 1 || atoi(month.c_str()) > 12)
		throw WrongDateException();
}

void	checkYear(std::string year)
{
	if (year.size() != 4)
		throw WrongDateException();
}

void	checkDate(std::string str)
{
	int	n = 0;
	for (size_t i = 0; i < str.size(); i++) {
		if (!isdigit(str[i])) {
			if (str[i] == '-') {
				if (!isdigit(str[i + 1])) {
					throw WrongDateException();
				}
				n++;
			}
		}
	}
	if (n != 2) {
		throw WrongDateException();
	}
	std::size_t foundFirst, foundLast;
	foundFirst = str.find_first_of("-");
	foundLast = str.find_last_of("-");
	checkYear(str.substr(0, foundFirst));
	checkMonth(str.substr(foundFirst + 1, foundLast - foundFirst - 1));
	checkDay(str.substr(foundLast + 1, str.size() - foundLast - 1));
}

void	BitcoinExchange::CheckInputs(std::ifstream & inputFile)
{
	std::string	str, date;
	size_t		pos;

	std::getline(inputFile, str);
	while (std::getline(inputFile, str)) {
		pos = str.find("|");
		try {
			std::string date = str.substr(0, pos - 1);
			checkDate(date);
			try {
				std::string value = str.substr(pos + 2, str.size() - pos - 2);
				checkValue(value);
				std::map <std::string, double>::iterator it = _dataBase.begin();
				while (it->first <= date)
					it++;
				std::cout << date << " => " << value << " = " << it->second * atof(value.c_str()) << std::endl;
			}
			catch (std::exception & e) {
				std::cout << e.what() << std::endl;
			}
		}
		catch (std::exception & e) {
			std::cout << e.what() << str.substr(0, pos - 1) << std::endl;
		}
	}
}
