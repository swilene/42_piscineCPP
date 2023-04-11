/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 11:50:56 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/11 18:41:35 by saguesse         ###   ########.fr       */
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
	char		index[50];
	char		enter[50];
	Contact		new_contact;
	PhoneBook	phone_book;

	while (1)
	{
		std::cin >> enter;
		if (!strcmp(enter, "ADD"))
		{
			phone_book.contacts[i % 8].setContact();
			i++;
		}
		else if (!strcmp(enter, "SEARCH"))
		{
			phone_book.getPhoneBook();
			std::cout << "Which contact do you want to see? (index 1-8) ";
			std::cin >> index;
			while (strlen(index) > 1 || index[0] < '1' || index[0] > '8')
			{
				std::cout << "Index must be a number be between 1 and 8!" << std::endl;
				std::cout << "Which contact do you want to see? (index 1-8) ";
				std::cin >> index;
			}
			phone_book.contacts[index[0] - '0' - 1].getContact();
		}
		else if (!strcmp(enter, "EXIT"))
			break ;
	}
	return (0);
}
