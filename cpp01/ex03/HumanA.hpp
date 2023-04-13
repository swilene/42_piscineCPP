/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 13:39:16 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/13 14:58:31 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>

#include "Weapon.hpp"

class	HumanA
{
	public:
		HumanA(std::string name, Weapon & club);
		~HumanA(void);

		void	attack(void);

	private:
		std::string	_name;
		Weapon&		_weapon;
};

#endif
