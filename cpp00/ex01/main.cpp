/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 11:50:56 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/12 13:56:39 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	int			i = 0;
	std::string	index;
	std::string	enter;
	Contact		new_contact;
	PhoneBook	phone_book;

	while (1)
	{
		std::getline (std::cin, enter);
		if (enter == "ADD")
		{
			phone_book.contacts[i % 8].setContact();
			phone_book.setList(i);
			i++;
		}
		else if (enter == "SEARCH")
		{
			phone_book.getPhoneBook();
			while (index.empty())
			{
				std::cout << "Which contact do you want to see? (index 1-8) ";
				std::getline (std::cin, index);
				if (index.size() > 1 || index < "1" || index > "8")
					std::cout << "Index must be a number be between 1 and 8!" << std::endl;
			}
			phone_book.contacts[index[0] - '0' - 1].getContact();
		}
		else if (enter == "EXIT")
			break ;
	}
	return (0);
}
