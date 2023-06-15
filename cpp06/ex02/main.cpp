/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 11:22:30 by saguesse          #+#    #+#             */
/*   Updated: 2023/06/15 13:37:26 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <cstdlib>
#include <ctime>
#include <exception>
#include <typeinfo>

void identify(Base& p)
{
	try {
		Base & newBase = dynamic_cast<A &>(p);
		std::cout << "I'm a reference to A" << std::endl;
	}
	catch (std::bad_cast &bc) {
		try {
			Base & newBase = dynamic_cast<B &>(p);
			std::cout << "I'm a reference to B" << std::endl;
		}
		catch (std::bad_cast &bc) {
			try {
				Base & newBase = dynamic_cast<C &>(p);
				std::cout << "I'm a reference to C" << std::endl;
			}
			catch (std::bad_cast &bc) {
				std::cout << "unknown base, conversion not ok: " << bc.what() <<std::endl;
			}
		}
	}
}

void identify(Base* p)
{
	Base* newBase = dynamic_cast<A *>(p);
	if (newBase == NULL) {
		Base* newBase = dynamic_cast<B *>(p);
		if (newBase == NULL)
			std::cout << "I'm a pointer to C" << std::endl;
		else
			std::cout << "I'm a pointer to B" << std::endl;
	}
	else
		std::cout << "I'm a pointer to A" << std::endl;
}

Base * generate(void)
{
	Base *p;

	srand(time(0));
	int random = 1 + (rand() % 3);

	switch (random)
	{
		case 1:
			p = new A();
			break;
		case 2:
			p = new B();
			break;
		case 3:
			p = new C();
			break;
	}
	return (p);
}

int	main()
{
	Base *p = generate();
	
	std::cout << std::endl;
	
	identify(p);
	identify(*p);

	std::cout << std::endl;

	delete p;

	return (0);
}
