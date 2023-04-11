/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 11:50:56 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/11 17:45:18 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	int			i = 0;
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
			phone_book.getPhoneBook();
		else if (!strcmp(enter, "EXIT"))
			break ;
	}
	return (0);
}
