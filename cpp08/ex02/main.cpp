/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 12:01:42 by saguesse          #+#    #+#             */
/*   Updated: 2023/06/21 13:45:02 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>

#include "MutantStack.hpp"

#include <stack>
#include <iostream>

int main()
{
	MutantStack<int> mstack;

	std::cout << std::endl;

	mstack.push(5);
	mstack.push(17);
	std::cout << "push 5 and 17 in mstack" << std::endl;
	std::cout << "mstack.top() = " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "mstack.pop(): removing the first element of mstack(17)" << std::endl;
	std::cout << "mstack.size() = " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	std::cout << "mstack.size() = " << mstack.size() << std::endl;
	std::cout << "push 3, 5, 737 and 0 in mstack" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "content of mstack:" << std::endl;
	for (; it != ite; it++)
		std::cout << *it << std::endl;
	std::stack<int> s(mstack);
	std::cout << "s.size() = " << s.size() << std::endl;

	std::cout << std::endl;

	MutantStack<int> test(mstack);
	std::cout << "test.size() = " << test.size() << std::endl;

	std::cout << std::endl;

	return (0);
}
