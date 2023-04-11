/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 11:21:03 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/11 18:18:30 by saguesse         ###   ########.fr       */
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
	std::cout << "Enter a first name: ";
	std::cin >> this->first_name;
	std::cout << "Enter a last name: ";
	std::cin >> this->last_name;
	std::cout << "Enter a nickname: ";
	std::cin >> this->nickname;
	std::cout << "Enter a phone number: ";
	std::cin >> this->phone_number;
	std::cout << "What is " << this->first_name << "'s darkest secret ? ";
	std::cin >> this->darkest_secret;
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
