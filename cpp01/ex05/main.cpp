/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:48:39 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/16 23:51:35 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl	harl;

	std::cout << "Debug:" << std::endl;
	harl.complain("debug");
	std::cout << "\nInfo:" << std::endl;
	harl.complain("info");
	std::cout << "\nWarning:" << std::endl;
	harl.complain("warning");
	std::cout << "\nError:" << std::endl;
	harl.complain("error");
}
