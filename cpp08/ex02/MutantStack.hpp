/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 12:09:58 by saguesse          #+#    #+#             */
/*   Updated: 2023/06/20 13:47:01 by saguesse         ###   ########.fr       */
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
		MutantStack(void) {return;} //default constructor
		MutantStack(MutantStack const & src); //copy constructor
		MutantStack & operator=(MutantStack const & rhs); //copy assignment operator
		~MutantStack(void) {return;} //destructor

		Container c;
		//typedef std::deque<T>::iterator;
		typedef typename Container::iterator	begin() = std::stack<T>::top();
		/*iterator	rbegin();
		iterator	end();
		iterator	rend();*/
};

#endif
