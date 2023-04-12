/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:28:55 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/12 18:44:35 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class	Contact{
	public:
		Contact(void);
		~Contact(void);

		std::string	getFirstName(int i);
		void		setFirstName(int i);
		std::string	getLastName(int i);
		void		setLastName(int i);
		std::string	getNickname(int i);
		void		setNickname(int i);
		std::string	getPhoneNumber(int i);
		void		setPhoneNumber(int i);
		std::string	getDarkestSecret(int i);
		void		setDarkestSecret(int i);
		void		printContact(int i);
		void		addContact(int i);

	private:
		std::string	_first_name[8];
		std::string	_last_name[8];
		std::string	_nickname[8];
		std::string	_phone_number[8];
		std::string	_darkest_secret[8];
};

#endif
