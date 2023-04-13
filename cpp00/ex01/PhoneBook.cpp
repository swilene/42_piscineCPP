/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:33:21 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/13 10:40:47 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::printPhoneBook(Contact contacts)
{
	std::string	index;

	std::cout << "| "
		<< std::setw(10) << "index" << " | "
		<< std::setw(10) << "first name" << " | "
		<< std::setw(10) << "last name" << " | "
		<< std::setw(10) << "nickname"
		<< " |" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << "| "
			<< std::setw(10) << i + 1 << " | "
			<< std::setw(10) << this->_first_name[i % 8] << " | "
			<< std::setw(10) << this->_last_name[i % 8] << " | "
			<< std::setw(10) << this->_nickname[i % 8]
			<< " |" << std::endl;
	}
	while (index.empty())
	{
		std::cout << "Which contact do you want to see? (index 1-8) ";
		std::getline (std::cin, index);
		if (index.size() > 1 || index < "1" || index > "8")
		{
			std::cout << "Index must be a number be between 1 and 8!";
			std::cout << "\n\n";
			index.clear();
		}
	}
	contacts.printContact(index[0] - '0' - 1);
	index.clear();
}

void	PhoneBook::setPhoneBook(Contact contacts)
{
	PhoneBook	phone_book;

	for (int i = 0; i < 8; i++)
	{
		phone_book._first_name[i % 8] = contacts.getFirstName(i);
		if (phone_book._first_name[i % 8].size() > 10)
		{
			phone_book._first_name[i % 8].resize(10);
			phone_book._first_name[i % 8].replace(9, 1, ".");
		}
		phone_book._last_name[i % 8] = contacts.getLastName(i);
		if (phone_book._last_name[i % 8].size() > 10)
		{
			phone_book._last_name[i % 8].resize(10);
			phone_book._last_name[i % 8].replace(9, 1, ".");
		}
		phone_book._nickname[i % 8] = contacts.getNickname(i);
		if (phone_book._nickname[i % 8].size() > 10)
		{
			phone_book._nickname[i % 8].resize(10);
			phone_book._nickname[i % 8].replace(9, 1, ".");
		}
	}
	phone_book.printPhoneBook(contacts);
}
