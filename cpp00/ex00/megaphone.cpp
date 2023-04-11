/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 14:40:48 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/11 12:34:48 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i=1; i < argc; i++)
		{
			for (size_t j=0; j < strlen(argv[i]); j++)
				std::cout << (char)toupper(argv[i][j]);
		}
		std::cout << "\n";
	}
	return 0;
}
