/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 14:40:48 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/06 17:04:23 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	main(int argc, char **argv)
{
	//int	i=1;
	//int	j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i=1; i < argc; i++)
		{
			for (int j=0; j < strlen(argv[i]); j++)
				std::cout << (char)toupper(argv[i][j]);
		}
		std::cout << "\n";
	}
	return 0;
}
