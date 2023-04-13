/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 21:57:56 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/13 22:09:37 by saguesse         ###   ########.fr       */
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
	PhoneBook	phone_book;

	while (1)
	{
		std::cout << "Enter one of the options: [ADD, SEARCH, EXIT]" << std::endl;
		std::getline (std::cin, enter);
		if (enter == "ADD")
		{
			phone_book.addContact(i);
			i++;
		}
		else if (enter == "SEARCH")
			phone_book.printPhoneBook();
		else if (enter == "EXIT")
			break ;
		enter.clear();
		std::cout << "\n";
	}
	return (0);
}
