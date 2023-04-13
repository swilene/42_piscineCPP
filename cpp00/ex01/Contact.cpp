/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 21:53:21 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/13 22:16:07 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

std::string	Contact::getFirstName(void)
{
	return (this->_first_name);
}

void	Contact::setFirstName(void)
{
	this->_first_name.clear();
	while (this->_first_name.empty())
	{
		std::cout << "Enter a first name: ";
		std::getline (std::cin, this->_first_name);
	}
}

std::string	Contact::getLastName(void)
{
	return (this->_last_name);
}

void	Contact::setLastName(void)
{
	this->_last_name.clear();
	while (this->_last_name.empty())
	{
		std::cout << "Enter a last name: ";
		std::getline (std::cin, this->_last_name);
	}
}

std::string	Contact::getNickname(void)
{
	return (this->_nickname);
}

void	Contact::setNickname(void)
{
	this->_nickname.clear();
	while (this->_nickname.empty())
	{
		std::cout << "Enter a nickname: ";
		std::getline (std::cin, this->_nickname);
	}
}

std::string	Contact::getPhoneNumber(void)
{
	return (this->_phone_number);
}

void	Contact::setPhoneNumber(void)
{
	this->_phone_number.clear();
	while (this->_phone_number.empty())
	{
		std::cout << "Enter a phone number: ";
		std::getline (std::cin, this->_phone_number);
	}
}

std::string	Contact::getDarkestSecret(void)
{
	return (this->_darkest_secret);
}

void	Contact::setDarkestSecret(void)
{
	this->_darkest_secret.clear();
	while (this->_darkest_secret.empty())
	{
		std::cout << "What is " << this->getFirstName() << "'s darkest secret ? ";
		std::getline (std::cin, this->_darkest_secret);
	}
}

void	Contact::printContact(void)
{
	std::cout << "First name: " << this->getFirstName() << std::endl
		<< "Last name: " << this->getLastName() << std::endl
		<< "Nickname: " << this->getNickname() << std::endl
		<< "Phone number: " << this->getPhoneNumber() << std::endl
		<< "Darkest secret: " << this->getDarkestSecret() << std::endl;
}
