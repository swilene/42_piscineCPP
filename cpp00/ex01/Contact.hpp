/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 10:46:55 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/11 17:57:23 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

class	Contact{
	public:
		Contact(void);
		~Contact(void);

		void	setContact(void);

		char	first_name[50];
		char	last_name[50];
		char	nickname[50];
		char	phone_number[50];
		char	darkest_secret[100];
};

#endif
