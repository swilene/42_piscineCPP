/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:21:45 by saguesse          #+#    #+#             */
/*   Updated: 2023/05/16 17:33:39 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <stdint.h>

class	Serializer
{
	public:
		Serializer(void); //default constructor
		Serializer(Serializer const & src); //copy constructor
		Serializer & operator=(Serializer const & rhs); //copy assignment operator
		~Serializer(void); //destructor

		static uintptr_t serialize(Data* ptr);
};

#endif
