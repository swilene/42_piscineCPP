/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materias.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 18:00:27 by saguesse          #+#    #+#             */
/*   Updated: 2023/04/24 18:00:36 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIAS_HPP
# define MATERIAS_HPP

class	AMaterias
{
	public:
		AMaterias(void); //default constructor
		AMaterias(AMaterias const & src); //copy constructor
		AMaterias & operator=(AMaterias const & rhs); //copy assignment operator
		~AMaterias(void); //destructor

	protected:
	private:
};

#endif
