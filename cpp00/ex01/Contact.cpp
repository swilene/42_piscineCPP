/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 11:21:03 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/12 18:51:43 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

std::string	Contact::getFirstName(int i)
{
	return (this->_first_name[i % 8]);
}

void	Contact::setFirstName(int i)
{
	this->_first_name[i % 8].clear();
	while (this->_first_name[i % 8].empty())
	{
		std::cout << "Enter a first name: ";
		std::getline (std::cin, this->_first_name[i % 8]);
	}
}

std::string	Contact::getLastName(int i)
{
	return (this->_last_name[i % 8]);
}

void	Contact::setLastName(int i)
{
	this->_last_name[i % 8].clear();
	while (this->_last_name[i % 8].empty())
	{
		std::cout << "Enter a last name: ";
		std::getline (std::cin, this->_last_name[i % 8]);
	}
}

std::string	Contact::getNickname(int i)
{
	return (this->_nickname[i % 8]);
}

void	Contact::setNickname(int i)
{
	this->_nickname[i % 8].clear();
	while (this->_nickname[i % 8].empty())
	{
		std::cout << "Enter a nickname: ";
		std::getline (std::cin, this->_nickname[i % 8]);
	}
}

std::string	Contact::getPhoneNumber(int i)
{
	return (this->_phone_number[i % 8]);
}

void	Contact::setPhoneNumber(int i)
{
	this->_phone_number[i % 8].clear();
	while (this->_phone_number[i % 8].empty())
	{
		std::cout << "Enter a phone number: ";
		std::getline (std::cin, this->_phone_number[i % 8]);
	}
}

std::string	Contact::getDarkestSecret(int i)
{
	return (this->_darkest_secret[i % 8]);
}

void	Contact::setDarkestSecret(int i)
{
	this->_darkest_secret[i % 8].clear();
	while (this->_darkest_secret[i % 8].empty())
	{
		std::cout << "What is " << this->getFirstName(i) << "'s darkest secret ? ";
		std::getline (std::cin, this->_darkest_secret[i % 8]);
	}
}

void	Contact::printContact(int i)
{
	std::cout << "First name: " << this->getFirstName(i) << std::endl
		<< "Last name: " << this->getLastName(i) << std::endl
		<< "Nickname: " << this->getNickname(i) << std::endl
		<< "Phone number: " << this->getPhoneNumber(i) << std::endl
		<< "Darkest secret: " << this->getDarkestSecret(i) << std::endl;
}

void	Contact::addContact(int i)
{
	this->setFirstName(i);
	this->setLastName(i);
	this->setNickname(i);
	this->setPhoneNumber(i);
	this->setDarkestSecret(i);
}

Contact::~Contact(void)
{
	return ;
}
