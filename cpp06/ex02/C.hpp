/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 11:19:49 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/17 11:24:54 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP

# include "Base.hpp"

# include <iostream> 

class	C : public Base
{
	public:
		C(void); //default constructor
		C(C const & src); //copy constructor
		C & operator=(C const & rhs); //copy assignment operator
		~C(void); //destructor

	protected:
	private:
};

#endif
