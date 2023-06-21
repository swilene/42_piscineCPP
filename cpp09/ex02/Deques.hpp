/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Deques.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:44:04 by saguesse          #+#    #+#             */
/*   Updated: 2023/06/21 17:32:52 by saguesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LISTS_HPP
# define LISTS_HPP

#include "PmergeMe.hpp"

#include <deque>

class	Deques : public PmergeMe
{
	public:
		Deques(void); //default constructor
		Deques(Deques const & src); //copy constructor
		Deques & operator=(Deques const & rhs); //copy assignment operator
		~Deques(void); //destructor

		int	getDSize() const;
		int	getPairsDSize() const;

		virtual void	createContainer(int argc, char** argv);
		virtual void	makePairs();
		virtual void	sortEachPairs();
		virtual void	insertSort(int left, int right);
		virtual void	insert(int left, int midPoint, int right);
		virtual void	sortContainer();
		virtual void	insertLast(int start, int end);

	private:
		unsigned int _dSize, _pairsDSize;
		std::deque<unsigned int> _d;
		std::deque<std::pair<unsigned int, unsigned int> > _pairsD;
};

#endif
