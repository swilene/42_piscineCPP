/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:09:51 by saguesse          #+#    #+#             */
/*   Updated: 2023/06/16 18:25:18 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

#include "RPN.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2) {
		std::cout << "./RPN \"reverse polish notation\"" << std::endl;
		return (1);
	}
	std::string str = static_cast<std::string>(argv[1]);
	for (size_t i = 0; i < str.size() - 1; i++) {
		if (!isdigit(str[i]) && str[i] != '+' && str[i] != '-' && str[i] != '/'
				&& str[i] != '*' && str[i] != ' ') {
			std::cout << "Error" << std::endl;
			return (2);
		}
		else if ((isdigit(str[i]) || str[i] == '+' || str[i] == '-'
					|| str[i] == '/' || str[i] == '*') && str[i + 1] != ' ') {
			std::cout << "Error" << std::endl;
			return (3);
		}
	}
	char last;
	for (size_t i = 0; i < str.size(); i++) {
		if (str[i] != ' ')
			last = str[i];
	}
	if (isdigit(last)) {
		std::cout << "Impossible" << std::endl;
		return (4);
	}

	RPN rpn(str);
	try {
		rpn.calculate();
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	return (0);
}
