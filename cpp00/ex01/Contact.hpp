/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 21:29:54 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/13 22:23:41 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>

class	Contact
{
	public:
		Contact(void);
		~Contact(void);

		std::string	getFirstName(void);
		void		setFirstName(void);
		std::string	getLastName(void);
		void		setLastName(void);
		std::string	getNickname(void);
		void		setNickname(void);
		std::string	getPhoneNumber(void);
		void		setPhoneNumber(void);
		std::string	getDarkestSecret(void);
		void		setDarkestSecret(void);
		void		printContact(void);

	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
};

#endif
