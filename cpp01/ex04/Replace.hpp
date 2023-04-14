/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 11:01:23 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/14 11:12:52 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

class	Replace
{
	public:
		Replace(std::string filename, std::string s1, std::string s2);
		~Replace(void);
	
	private:
		std::string	_filename;
		std::string	_s1;
		std::string	_s2;
};

#endif
