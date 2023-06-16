/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 12:09:58 by saguesse          #+#    #+#             */
/*   Updated: 2023/06/16 13:32:42 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template <class T>
class	MutantStack : public std::stack<T>
{
	public:
		MutantStack(void) {} //default constructor
		MutantStack(MutantStack const & src); //copy constructor
		MutantStack & operator=(MutantStack const & rhs); //copy assignment operator
		~MutantStack(void); //destructor
	
};

#endif
