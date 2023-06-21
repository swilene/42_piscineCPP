/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 12:09:58 by saguesse          #+#    #+#             */
/*   Updated: 2023/06/21 13:41:09 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <deque>

template <class T, class Container = std::deque<T> >
class	MutantStack : public std::stack<T>
{
	public:
		MutantStack(void) { std::cout << "MutantStack Default constructori called" << std::endl; } //default constructor
		MutantStack<T> (MutantStack const & src) : std::stack<T, Container>(src) //copy constructor
		{
			std::cout << "MutantStack Copy constructor called" << std::endl;
		}
		MutantStack<T> & operator=(MutantStack const & rhs) //copy assignment operator
		{
			std::cout << "RPN Copy assignment operator called" << std::endl;

			if (this != &rhs)
				this = new std::stack<T>(rhs);
			return (*this);
		}
		~MutantStack(void) { std::cout << "MutantStack Default destructor called" << std::endl; } //destructor

		typedef typename Container::iterator iterator;
		typedef typename Container::const_iterator const_iterator;
		typedef typename Container::reverse_iterator reverse_iterator;
		typedef typename Container::const_reverse_iterator const_reverse_iterator;

		iterator	begin() {return (std::stack<T>::c.begin()); }
		iterator	end() {return (std::stack<T>::c.end()); }
		iterator	rbegin() {return (std::stack<T>::c.rbegin()); }
		iterator	rend() {return (std::stack<T>::c.rend()); }
		iterator	cbegin() {return (std::stack<T>::c.cbegin()); }
		iterator	cend() {return (std::stack<T>::c.cend()); }
		iterator	crbegin() {return (std::stack<T>::c.crbegin()); }
		iterator	crend() {return (std::stack<T>::c.crend()); }
};

#endif
