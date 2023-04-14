/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 11:01:33 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/14 11:13:55 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string filename, std::string s1, std::string s2) :
						_filename(filename), _s1(s1), _s2(s2);
{
	return ;
}

Replace::~Replace(void);
{
	return ;
}


