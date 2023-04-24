/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:47:05 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/24 15:57:29 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class	Brain
{
	public:
		Brain(void); //default constructor
		Brain(Brain const & src); //copy constructor
		Brain & operator=(Brain const & rhs); //copy assignment operator
		~Brain(void); //destructor

		void		setIdeas(std::string idea, int i);
		std::string	getIdeas(int i);

	protected:
		std::string	_ideas[100];
};

#endif
