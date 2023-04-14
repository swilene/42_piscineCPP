/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 11:48:58 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/14 11:51:27 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>

class	Harl
{
	public:
		Harl(void);
		~Harl(void);

		void complain(std::string level);

	private:
		void	_debug(void);
		void	_info(void);
		void	_warning(void);
		void	_error(void);
};

#endif
