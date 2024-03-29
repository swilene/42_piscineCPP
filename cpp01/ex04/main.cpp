/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 10:40:39 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/17 11:27:31 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Expected: <filename> <string 1> <string 2>" << std::endl;
		return (1);
	}
	if (!strlen(argv[2]))
	{
		std::cout << "s1 can't be empty" << std::endl;
		return (1);
	}
	Replace	rep(argv[1], argv[2], argv[3]);
	rep.replaceString();
	return (0);
}
