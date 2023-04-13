/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:14:32 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/13 17:49:37 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>

#include "Weapon.hpp"

class	HumanB
{
	public:
		HumanB(std::string name);
		~HumanB(void);

		void	setWeapon(Weapon* club);
		void	attack(void);

	private:
		std::string	_name;
		Weapon*		_weapon;
};

#endif
