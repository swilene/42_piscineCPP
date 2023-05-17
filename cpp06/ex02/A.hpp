/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 11:17:35 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/17 15:01:13 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

# include "Base.hpp"

# include <iostream>

class	A : public Base
{
	public:
		A(void); //default constructor
		~A(void); //destructor
	
		/*class	BasCastException : public std::exception
		{
			public:
				const char* what() const throw();
		}*/

};

#endif
