/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 11:21:03 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/11 17:42:58 by saguesse         ###   ########.fr       */
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

Contact::~Contact(void)
{
	return ;
}
