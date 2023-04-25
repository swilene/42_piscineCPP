/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:14:04 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/25 18:06:32 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

class	Cure
{
	public:
		Cure(void); //default constructor
		Cure(Cure const & src); //copy constructor
		Cure & operator=(Cure const & rhs); //copy assignment operator
		~Cure(void); //destructor

	protected:
	private:
};

#endif
