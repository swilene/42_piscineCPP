/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:33:21 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/12 14:23:43 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	return ;
}

void	PhoneBook::setList(int i)
{
	this->list[i % 8].first_name = this->contacts[i % 8].first_name;
	if (this->list[i % 8].first_name.size() > 10)
	{
		this->list[i % 8].first_name.resize(10);
		this->list[i % 8].first_name.replace(9, 1, ".");
	}
	this->list[i % 8].last_name = this->contacts[i % 8].last_name;
	if (this->list[i % 8].last_name.size() > 10)
	{
		this->list[i % 8].last_name.resize(10);
		this->list[i % 8].last_name.replace(9, 1, ".");
	}
	this->list[i % 8].nickname = this->contacts[i % 8].nickname;
	if (this->list[i % 8].nickname.size() > 10)
	{
		this->list[i % 8].nickname.resize(10);
		this->list[i % 8].nickname.replace(9, 1, ".");
	}
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
			<< std::setw(10) << this->list[i].first_name << " | "
			<< std::setw(10) << this->list[i].last_name << " | "
			<< std::setw(10) << this->list[i].nickname
			<< " |" << std::endl;
	}
}

PhoneBook::~PhoneBook(void)
{
	return ;
}
