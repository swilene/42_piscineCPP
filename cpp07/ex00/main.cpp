/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 17:11:32 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/23 17:33:30 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "whatever.hpp"

int	main(void)
{
	int a = 2;
	int b = 3;
	std::cout << "before swap: a = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	std::cout << "after swap: a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::cout << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << "before swap: c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "after swap: c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << std::endl;

	double e = 42.42;
	double f = 3.14;
	std::cout << "before swap: e = " << e << ", f = " << f << std::endl;
	::swap(e, f);
	std::cout << "after swap: e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;

	return 0;
}
