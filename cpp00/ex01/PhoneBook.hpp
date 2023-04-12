/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:27:43 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/12 18:50:35 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>

#include "Contact.hpp"

class	PhoneBook{
	public:
		PhoneBook(void);
		~PhoneBook(void);


		void	setPhoneBook(Contact contacts);
		void	printContact(int i);
		void	printPhoneBook(Contact contacts);

	private:
		std::string	_first_name[8];
		std::string	_last_name[8];
		std::string	_nickname[8];
};

#endif
