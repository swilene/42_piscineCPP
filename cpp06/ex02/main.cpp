/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 11:22:30 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/17 15:33:03 by saguesse         ###   ########.fr       */
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

/*void identify(Base& p)
{
	
}*/

void identify(Base* p)
{
	Base* newBase;
	try
	{
		newBase = dynamic_cast<Base*>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast &bc)
	{

	}
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
	identify(p);
	//identify(&p);

	delete p;

	return (0);
}
