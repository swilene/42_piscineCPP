/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 11:50:56 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/12 18:44:17 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <string>

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
	int			i = 0;
	std::string	enter;
	Contact		contacts;
	PhoneBook	phone_book;

	while (1)
	{
		std::cout << "enter the options: [ADD, SEARCH, EXIT]" << std::endl;
		std::getline (std::cin, enter);
		if (enter == "ADD")
		{
			contacts.addContact(i);
			i++;
		}
		else if (enter == "SEARCH")
			phone_book.setPhoneBook(contacts);
		else if (enter == "EXIT")
			break ;
		enter.clear();
	}
	return (0);
}
