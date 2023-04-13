/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 13:33:11 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/13 16:26:10 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class	Weapon
{
	public:
		Weapon(std::string type);
		~Weapon(void);

		std::string	const	getType(void);
		void				setType(std::string type);

	private:
		std::string	_type;
};

#endif
