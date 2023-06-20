/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vectors.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 17:36:44 by saguesse          #+#    #+#             */
/*   Updated: 2023/06/20 17:54:24 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTORS_HPP
# define VECTORS_HPP

#include "PmergeMe.hpp"

class	Vectors : public PmergeMe
{
	public:
		Vectors(void); //default constructor
		Vectors(Vectors const & src); //copy constructor
		Vectors & operator=(Vectors const & rhs); //copy assignment operator
		~Vectors(void); //destructor

		int	getVSize() const;
		int	getPairsVSize() const;

		virtual void	createContainer(int argc, char** argv);
		virtual void	makePairs();
		virtual void	sortEachPairs();
		virtual void	insertSort(int left, int right);
		virtual void	insert(int left, int midPoint, int right);
		virtual void	sortContainer();
		virtual void	insertLast(int start, int end);

	private:
		unsigned int _vSize, _pairsVSize;
		std::vector<unsigned int> _v;
		std::vector<std::pair<unsigned int, unsigned int> > _pairsV;

};

#endif
