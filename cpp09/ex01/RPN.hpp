/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:33:15 by saguesse          #+#    #+#             */
/*   Updated: 2023/06/16 17:37:07 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <string>

class	RPN
{
	public:
		RPN(std::string str);
		RPN(RPN const & src); //copy constructor
		RPN & operator=(RPN const & rhs); //copy assignment operator
		~RPN(void); //destructor

		void	calculate();

	class	DivisionByZeroException : public std::exception
	{
		public:
			const char* what() const throw();	
	};

	class	ImpossibleException : public std::exception
	{
		public:
			const char* what() const throw();	
	};

	private:
		RPN(void); //default constructor

		std::string _str;
};

#endif
