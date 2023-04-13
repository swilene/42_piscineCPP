/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 21:45:31 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/13 22:41:23 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::addContact(int i)
{
	this->_contacts[i % 8].setFirstName();
	this->_contacts[i % 8].setLastName();
	this->_contacts[i % 8].setNickname();
	this->_contacts[i % 8].setPhoneNumber();
	this->_contacts[i % 8].setDarkestSecret();
	std::cout << "Contact successfully created!" << std::endl;
}

std::string	PhoneBook::resize(std::string str)
{
	if (str.size() < 11)
		return (str);
	str.resize(10);
	str.replace(9, 1, ".");
	return (str);
}

void	PhoneBook::printPhoneBook(void)
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
			<< std::setw(10) << this->resize(this->_contacts[i % 8].getFirstName()) << " | "
			<< std::setw(10) << this->resize(this->_contacts[i % 8].getLastName()) << " | "
			<< std::setw(10) << this->resize(this->_contacts[i % 8].getNickname())
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
	this->_contacts[index[0] - '0' - 1].printContact();
	index.clear();
}
