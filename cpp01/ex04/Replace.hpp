/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 11:01:23 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/14 16:22:38 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

class	Replace
{
	public:
		Replace(char *filename, std::string s1, std::string s2);
		~Replace(void);

		void	replaceString(void);
	
	private:
		char		*_filename;
		std::string	_s1;
		std::string	_s2;
};

#endif
