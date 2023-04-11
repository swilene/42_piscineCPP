/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:33:21 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/11 18:09:48 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	return ;
}

void	PhoneBook::getPhoneBook(void)
{
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
			<< std::setw(10) << this->contacts[i].first_name << " | "
			<< std::setw(10) << this->contacts[i].last_name << " | "
			<< std::setw(10) << this->contacts[i].nickname
			<< " |" << std::endl;
	}
}

PhoneBook::~PhoneBook(void)
{
	return ;
}
