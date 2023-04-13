/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 22:49:07 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/13 11:16:42 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class	Zombie
{
	public:
		Zombie(void);
		~Zombie(void);

		void	announce(void);
		void	setName(std::string name);

	private:
		std::string	_name;
};

#endif
