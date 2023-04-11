/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 17:23:45 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/11 17:37:40 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class	PhoneBook{
	public:
		PhoneBook(void);
		~PhoneBook(void);

		void	getPhoneBook(void);
		Contact contacts[8];

	private:
};

#endif
