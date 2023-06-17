/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:15:31 by saguesse          #+#    #+#             */
/*   Updated: 2023/06/17 15:14:55 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>

class	MaxSizeException : public std::exception
{
	public:
		const char* what() const throw() { return ("You've reached the max size, you can't add an other number"); }
};

class	LessThanTwoException : public std::exception
{
	public :
		const char* what() const throw() { return ("You need at least two numbers"); }
};

class	Span
{
	public:
		Span(unsigned int N);
		Span(Span const & src); //copy constructor
		Span & operator=(Span const & rhs); //copy assignment operator
		~Span(void); //destructor

		unsigned int	getSize() const;
		void			setTab();

		void			addNumber(int nb);
		unsigned int	shortestSpan();
		unsigned int	longestSpan() const;

	private:
		Span(void); //default constructor

		unsigned int 	_size;
		std::vector<int> _tab;
};

#endif
