/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 11:21:03 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/12 14:32:30 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

void	Contact::setContact(void)
{
	while (this->first_name.empty())
	{
		std::cout << "Enter a first name: ";
		std::getline (std::cin, this->first_name);
	}
	while (this->last_name.empty())
	{
		std::cout << "Enter a last name: ";
		std::getline (std::cin, this->last_name);
	}
	while (this->nickname.empty())
	{
		std::cout << "Enter a nickname: ";
		std::getline (std::cin, this->nickname);
	}
	while (this->phone_number.empty())
	{
		std::cout << "Enter a phone number: ";
		std::getline (std::cin, this->phone_number);
	}
	while (this->darkest_secret.empty())
	{
		std::cout << "What is " << this->first_name << "'s darkest secret ? ";
		std::getline (std::cin, this->darkest_secret);
	}
	std::cout << "Contact successfuly created!" << std::endl;
}

void	Contact::getContact(void)
{
	std::cout << "First name: " << this->first_name << std::endl
		<< "Last name: " << this->last_name << std::endl
		<< "Nickname: " << this->nickname << std::endl
		<< "Phone number: " << this->phone_number << std::endl
		<< "Darkest secret: " << this->darkest_secret << std::endl;
}

Contact::~Contact(void)
{
	return ;
}
