/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 21:36:15 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/13 22:43:25 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include <iomanip>

#include "Contact.hpp"

class	PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);

		void		addContact(int i);
		void		printPhoneBook(void);
		std::string	resize(std::string str);

	private:
		Contact	_contacts[8];
};

#endif
