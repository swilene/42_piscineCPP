/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 11:01:33 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/16 17:05:16 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(char *filename, std::string s1, std::string s2) :
						_filename(filename), _s1(s1), _s2(s2)
{
	return ;
}

Replace::~Replace(void)
{
	return ;
}

void	Replace::replaceString(void)
{
	std::ifstream	infile((char *)this->_filename);
	if (!infile)
	{
		std::cout << "Error: can't open " << this->_filename << std::endl;
		return ;
	}

	char	*out = strcat(this->_filename, ".replace");
	std::ofstream	outfile(out);
	if (!outfile)
	{
		std::cout << "Error: can't open " << out << std::endl;
		infile.close();
		return ;
	}

	std::string	str;
	size_t		pos;
	while (std::getline(infile, str))
	{
		pos = str.find(this->_s1, 0);
		while (pos != std::string::npos)
		{
			str.erase(pos, this->_s1.size());
			str.insert(pos, this->_s2);
			pos = str.find(this->_s1, pos);
		}
		outfile << str;
		outfile << "\n";
	}
}
